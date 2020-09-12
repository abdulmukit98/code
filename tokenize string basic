#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        tokenize basic
    */
    printf("Enter sentence: ");
    char s1[100];
    memset(s1,0x0,sizeof(s1));
    gets(s1);

    vector<string> word;
    char token[20];
    memset(token,0x0,sizeof(token));
    int d=0;

    for(int i=0; i<=strlen(s1); i++)
    {
        if(s1[i] == ',' || s1[i] == '.') s1[i] = ' ';

        if(s1[i] == ' ' || s1[i] == '\0')
        {
            if(strlen(token) > 0)
                word.push_back(token);
            d=0;
            memset(token,0x0,sizeof(token));
            continue;
        }
        token[d] = s1[i];
        d++;
    }

    for(int i=0; i<word.size(); i++)
        cout<<word[i]<<endl;

    return 0;
}

