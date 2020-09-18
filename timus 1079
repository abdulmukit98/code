#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

int main()
{
    /**
        timus 1020



    */
    int a[100000];
    a[0] = 0;
    a[1] = 1;
    for(int i=2; i<100000; i++)
    {
        if(i%2==0) a[i] = a[i/2];
        else if (i%2 == 1) a[i] = a[i/2] + a[i/2+1];
    }

    int x, mx;
    while(scanf("%d",&x) && x!=0)
    {
        mx = -1;
        for(int i=0; i<=x; i++)
            if(mx < a[i]) mx = a[i];

        printf("%d\n",mx);
    }


    return 0;
}
