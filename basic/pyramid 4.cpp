#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** pyramid 4

    12321
    .121.
    ..1..

    */

    printf("Pyramid 4\nEnter n: ");
    int n; scanf("%d",&n);

    for(int i = n; i>=1; i--)
    {
        for(int j = 1; j<=n-i; j++)
            printf(".");

        for(int j=1; j<=i; j++)
            printf("%d",j);

        for(int j=i-1; j>=1; j--)
            printf("%d",j);

        for(int j = 1; j<=n-i; j++)
            printf(".");

        printf("\n");
    }

}
