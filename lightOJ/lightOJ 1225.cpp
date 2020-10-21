#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long


int main()
{
    /***
        lightOJ 1225 palindromic number

    */

    int test; scanf("%d",&test);
    char arr[20];
    char brr[20];
    for(int t=1; t<=test; t++)
    {
        memset(arr,0x0,sizeof(arr));
        memset(brr, 0x0, sizeof(brr));

        scanf("%s",arr);
        for(int i = strlen(arr)-1, j=0; i>=0; i--, j++)
        {
            brr[j] = arr[i];
        }

        if(strcmp(arr,brr)==0)
            printf("Case %d: Yes\n",t);
        else printf("Case %d: No\n",t);
    }

    return 0;
}


