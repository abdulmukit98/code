#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        strtok

    */

    char str[100];
    gets(str);

    vector<char*> word;
    char* token;

    token = strtok(str, ", ");

    while(token!=NULL)
    {
        word.push_back(token);
        token = strtok(null, " ,");     ///strtok must run to find next token
    }

    for(int i=0; i<word.size(); i++)    printf("%s\n",word[i]);


    return 0;
}
