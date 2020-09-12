#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        sort array
    */

    int n; scanf("%d",&n);
    int arr[n]; for(int i=0; i<n; i++) scanf("%d",&arr[i]);
    int min = 10e8, index = 0;


    for(int i=0; i<n; i++)
    {
        min = 10e8;
        for(int j=i; j<n; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for(int i=0; i<n; i++) printf("%d\n",arr[i]);

    return 0;
}

