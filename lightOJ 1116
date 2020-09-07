#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*** lightOJ 1116

        W range 2^63
        unsigned long long int

    */

    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        long long W; scanf("%lld",&W);

        if(W%2 == 1){
            printf("Case %d: Impossible\n",i);
            continue;
        }


        long long n, m; /// n odd  m even
        bool flag = false;
        for( long long j = 2; j<=W; j = j+2)
        {
            if (W%j == 0 && j%2 == 0 &&  (W/j) %2 ==1) {
                n = W/j; m = j;
                printf("Case %d: %lld %lld\n", i, n,m);
                flag = true;
                break;
            }

        }
        if(flag == true) continue;
        else printf("Case %d: Impossible\n",i);
    }

    return 0;
}


