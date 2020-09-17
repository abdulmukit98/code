#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long


int main()
{
    /***
        timus 1319. Hotel

        A00 A01 A02 A03
        A10 A11 A12 A13
        A20 A21 A22 A23
        A30 A31 A32 A33


        A00 A01 A02 A03
            A11 A12 A13
                A22 A23
                    A33

    */
    int n; scanf("%d",&n);
    int d=1;
    int arr[n][n];

    for(int j=n-1; j>=0; j--)
    {
        int k=j;
        for(int i=0; i <= (n-1)-j; i++, k++)
        {
            ///printf("%d%d\n",i,k);
            arr[i][k] = d;
            d++;
        }
    }


    /**
        1
        A10 2
        A20 A21 3
        A30 A31 A32
    */

    for(int i=1; i<=n-1; i++)
    {
        int k=i;
        for(int j=0; j <= (n-1)-i; j++, k++)
        {
            ///printf("%d%d\n",k,j);
            arr[k][j] = d;
            d++;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
