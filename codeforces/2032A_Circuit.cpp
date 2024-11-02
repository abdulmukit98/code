#include<bits/stdc++.h>
using namespace std;
int main()
{   //cout<<"Hello World"<<endl;
    int t; cin>>t;
    for(int k=0; k<t; k++)
    {
        int n; cin>>n;
        int m = n*2;
        int arr[n*2];
        int one = 0;
        for(int i=0; i<n*2; i++)
        {
            cin>>arr[i];
            if(arr[i]==1) one++;
        }

        int min = 100005, max = -1;
        if(one == 0 || one == m)
        {
            min = 0; max = 0;
        }
        else if(one == m/2 && m%one ==0)
        {
            min = one%2; max = one;
        }
        else if(one == m/2 && m%one==1)
        {
            max = (m/2) - (one - m/2);
            min = one%2; 
        }
        else if(one > m/2)
        {
            min = one%2;
            max = m - one;
        }
        else if(one < m/2) 
        {
            min = one %2;
            max = one;
        }
        cout<<min<<" "<<max<<endl;

    }

    return 0;
}