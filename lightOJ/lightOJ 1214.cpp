#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long


int main()
{
    /***
        lightOJ 1214 large division

        dividend  = 15479
        divisor   = 16
        quotient  = 967
        reminder  = 7


        16  |  15479  | 9   6    7
            |  144    |
            ------------
                107
                 96
            ------------
                 119
                 112
            ------------
                   7            // reminder 7 , not divisible

    */

    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        char dividend[207];
        signed long long divisor;
        cin>>dividend>>divisor;

        if(divisor<0) divisor = -divisor;

        int index=0;
        if(dividend[0]=='-') index=1;



        ll cnt = 0;
        for(int i=index; i<strlen(dividend); )
        {
            if(cnt < divisor)
            {
                int digit = dividend[i] - '0';
                cnt = 10*cnt + digit;
                ///printf("%d\n",cnt);
                i++;
            }
            if(cnt >= divisor)
            {
                cnt = cnt % divisor;
                ///printf("%d\n",cnt);
            }
        }
        if(cnt==0) printf("Case %d: divisible\n",t);
        else if(cnt>0) printf("Case %d: not divisible\n",t);
      
      ///if cnt not ll , it may overflow some time
      ///10737418235 2147483647

    }

    return 0;
}


