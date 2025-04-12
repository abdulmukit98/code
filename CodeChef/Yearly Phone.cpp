#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year; cin>>year;
    string s = to_string(year%100);

    if(s.length()<2)
        cout<<"K0"<<s<<endl;
    else cout<<"K"<<s<<endl;

    return 0;
}
