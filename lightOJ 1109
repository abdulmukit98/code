#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

#define limit 1000
int nod[1007] = {0};
int arr[1007];

int main()
{
    /***
        lightOJ 1109


        pre-calculate
    */

    int maxdiv = 0;
    for(int i=1; i<=limit; i++)
    {
        for(int j=1; j*j<=i; j++)
        {
            if(i%j == 0)
            {
                if(j == i/j) nod[i] = nod[i] + 1;
                else nod[i] = nod[i] + 2;
            }

        }
        if(maxdiv < nod[i]) maxdiv = nod[i];
    }

    int d=1;
    for(int i=1; i<=maxdiv; i++)
    {
        for(int j=limit; j>=1; j--)   ///if div_count match in reverse order
        {
            if(nod[j] == i)
            {
                arr[d] = j;
                d++;
            }
        }
    }

    /**
    ///check
    for(int i=1; i<=limit; i++)
        printf("%d %d %d\n",i, nod[arr[i]], arr[i]);
    */


    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        int n;scanf("%d",&n);
        printf("Case %d: %d\n",t,arr[n]);
    }

    return 0;
}


