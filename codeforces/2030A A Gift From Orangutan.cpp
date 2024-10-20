#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    for(int k=0; k<t; k++)
    {
        int n; cin>>n;
        int min=100007, max=0;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] < min)
                min=a[i];
            if(a[i] > max)
                max = a[i];
        }
        cout<<(n-1)*(max-min)<<endl;
    }

    return 0;
}
