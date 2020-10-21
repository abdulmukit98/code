#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long
void processing(ll num);

int main()
{
    /**
        timus 1014
        if n=0, print(10);
        if n=1, print(1)

        For each i = 9 to 2, repeatedly divide n by i until it cannot be further divided or the list of numbers from 9 to 2 gets finished.
        Also, in the process of division push each digit i onto the stack which divides n completely. 
        After the above process gets completed check whether n == 1 or not. 
        If not, then print “-1”, else calculate the number k using the digits from the stack 
        containing the digits in the same sequence as popped from the stack
        
    0->10
    1->1
    2->2
    3->3
    4->4
    5->5
    6->6
    7->7
    8->8
    9->9
    10->25
    11->-1
    12->26
    13->-1
    14->27
    15->35
    16->28
    17->-1
    18->29
    19->-1
    20->45
    21->37
    22->-1
    23->-1
    24->38
    25->55
    26->-1
    27->39
    28->47
    29->-1
    30->56
    31->-1
    32->48
    33->-1
    34->-1
    35->57
    36->49
    37->-1
    38->-1
    39->-1
    40->58
    41->-1
    42->67
    43->-1
    44->-1
    45->59
    46->-1
    47->-1
    48->68
    49->77
    50->255
    51->-1
    52->-1
    53->-1
    54->69
    55->-1
    56->78
    57->-1
    58->-1
    59->-1
    60->256
    61->-1
    62->-1
    63->79
    64->88
    65->-1
    66->-1
    67->-1
    68->-1
    69->-1
    70->257
    71->-1
    72->89
    73->-1
    74->-1
    75->355
    76->-1
    77->-1
    78->-1
    79->-1
    80->258
    81->99
    82->-1
    83->-1
    84->267
    85->-1
    86->-1
    87->-1
    88->-1
    89->-1
    90->259
    91->-1
    92->-1
    93->-1
    94->-1
    95->-1
    96->268
    97->-1
    98->277
    99->-1
    100->455

    test8 
    732421875->3555555555555



    */

    ll num; scanf("%lld",&num);
    
    if(num==0)printf("10\n");
    else if(num==1)printf("1\n");
    else processing(num);
    


    return 0;
}

void processing(ll num)
{
    stack <int> s;

    for(int i=9; i>=2; i--)
    {
        while(num % i == 0)
        {
            s.push(i);
            num = num / i;
        }
    }

    if(num != 1) printf("-1\n");
    else{
        while(!s.empty())
        {
            int i = s.top();
            printf("%d", i);
            s.pop();
        }
        printf("\n");
    } 

}
