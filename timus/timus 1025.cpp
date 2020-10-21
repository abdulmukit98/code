#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

int main()
{
    /***
        timus 1025 Democracy in Danger

    */
    /// input
    int test;
    scanf("%d",&test);
    vector <int> group;
    for(int i=0; i<test; i++)
    {
        int a; scanf("%d",&a);
        group.push_back(a);
    }

    /// sorting
    for(int i=0; i<test; i++)
    {
        int min = 10e8, index=-1;
        for(int j=i; j<test; j++)
        {
            if(group[j] < min){
                min=group[j];
                index = j;
            }
        }
        swap(group[i], group[index]);
    }


    /**
    calculating

    mid = test/2+1
    since index start from 0
    range = 0 to test/2+1
    */
    int cnt=0;
    for(int i=0; i< group.size()/2+1; i++)
    {
        cnt = cnt + group[i]/2+1;
    }
    printf("%d\n",cnt);

    return 0;
}
