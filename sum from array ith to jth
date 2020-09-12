#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        summation from ith to jth

    */
    printf("Summation from ith element to jth element\nEnter n: ");
    int n; scanf("%d",&n);
    int sum[n], a;
    sum[0]=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(i==0)
            sum[i] = a;
        else
            sum[i] = sum[i-1] + a;
    }

    printf("Enter ith and jth range: ");
    int i,j; scanf("%d %d",&i,&j);

    /**
        since array index start at zero pos - 1 to get index

        we keep from ith(smallest) to jth(big)
        jth - (ith-1)
    */
    int ans;
    if(i>j)
        ans = sum[i-1] - sum[j-2];      /// we keep n . not reject it
    else if(j>i)
        ans = sum[j-1] - sum[i-2];

    printf("Summation: %d\n",ans);


    return 0;
}

