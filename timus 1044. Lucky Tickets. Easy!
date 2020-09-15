#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

ll sod(int n);

int main()
{
    /***
        timus 1044. Lucky Tickets. Easy!
        .
        .
        let  56127043

             LHS    RHS
             5612   7043
             ----   ----
      sod     14     14
             5333   7115
             ----   ----
              14    14

          for each 0 to mid_range   we calculate each (sod)

              i       sod(i)
            0000        0           then populate sod() frequency.
            ...0        0           then calculate those frequency.
            ...1        1
            ....
            ....
            ....
            9999        36

    */
    /// input
    int n;
    scanf("%d",&n);
    int mid_range = pow(10,n/2)+.5 -1;



    ///populate data
    /**
        let n = 4
            LHS    RHS
            00      00
            ..      ..
            99      99

    sum of maximum mid_range = 9+9 = 18
    that means freq_of_sod don't exceed index 18 for n=4

        for n = 8       LHS         RHS
            mid_range = 9999        9999
            sum_mid_range = 4*9 = 36
    */

    int sum_mid_range = n/2*9;
    int freq_of_sod[sum_mid_range + 1] = {0};


    ///count each sod variation
    for(int i=0; i<=mid_range; i++)
    {
        freq_of_sod[sod(i)]++;
    }


    /**let  n = 4; LHS 2-digits
                   RHS 2-digits

            for 57 = sod(57) = 12
            here 12 make 7 variance
                39
                48
                57
                66
                75
                84
                93

           LHS      RHS
            57       39
             .       48
             .       57
             .       66
             .       75
             .       84
             .       93



                         LHS            RHS  sod(i) make how many variation

        for each i from ...0                RHS can have all variance as above.
                        ....
                        ....
                        9999

    */
    ll ans=0;
    for(int i=0; i<=mid_range; i++)
        {
                    /// RHS variation for each LHS i
          ans = ans + freq_of_sod[sod(i)];
        }
    printf("%lld\n",ans);


    return 0;
}


ll sod(int n)
{
    ll sum=0;
    while(n!=0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}
