#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long


int main()
{
    /***
        timus 1313. Some Words about Sport

            A00 A01 A02 A03
            A10 A11 A12 A13
            A20 A21 A22 A23
            A30 A31 A32 A33


        A00 A01 A02 A03
        A10 A11 A12
        A20 A21
        A30
                    A13
                A22 A23
            A31 A32 A33

    */

    int n; scanf("%d",&n);
    int a[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);


    /** 1st half

        A00 A01 A02 A03
        A10 A11 A12
        A20 A21
        A30
    */
    for(int i=0; i<n; i++)
    {
        int k = i;
        for(int j=0; j<=i; j++, k--)
        {
            printf("%d ",a[k][j]);
        }
    }

    /** 2nd half
                    A13
                A22 A23
            A31 A32 A33
    */

    for(int j=1; j<n; j++)
    {
        int k = j;
        for(int i=n-1; i>=j; i--, k++)
        {
            printf("%d ",a[i][k]);
        }
    }

    return 0;
}
