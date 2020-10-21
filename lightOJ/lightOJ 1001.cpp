#include<bits/stdc++.h>
using namespace std;


int main()
{
    /**
        LightOJ 1001
    */

    int n; scanf("%d",&n);
    int k[n];
    for(int i=0; i<n; i++) scanf("%d",&k[i]);

    for (int i=0; i<n; i++)
    {
        if(k[i] == 0) printf("%d %d\n", 0,0);
        else if( k[i] % 10 == 0 ) printf("%d %d\n", 10, k[i] - 10);
        else printf("%d %d\n", k[i]%10, k[i] - k[i]%10);
    }

    return 0;
}


