#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** Timus 1068
        sum of All integer between 1 to n
    */

    int n, sum = 0;
    scanf("%d",&n);

    if (n >= 1 )
    {
        for(int i = 1; i<=n; i++)
            sum += i;
    }
    else{
        for(int i = 1; i>=n; i--)
            sum += i;
    }

    printf("%d\n",sum);

}
