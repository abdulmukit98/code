#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        stringstream

    */

    char str[100];
    gets(str);
    for(int i=0; i<strlen(str); i++s)
        if(str[i]==',') str[i]=' ';

    vector<string> word;

    stringstream func(str);
    string s;
    while(func >> s)        ///  >> bitwise write shift
    {
        word.push_back(s);
    }

    for(int i=0; i<word.size(); i++)
        cout<<word[i]<<endl;
    return 0;
}
