#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;
    for(int i=0; i<q; i++)
    {
        string s, t;
        cin>>s>>t;
        int len = min(s.size(), t.size());

        int cnt = 0;
        for(int j=0; j<len; j++)
        {
            if(s[j] != t[j]) break;
            else if(s[j]==t[j]) cnt++;
        }
        int rem_s = s.size()-cnt;
        int rem_t = t.size()-cnt;
        if (cnt > 0) cnt += 1;
        cnt = cnt + rem_s + rem_t;
        cout<<cnt<<endl;
    }
    return 0;
}
