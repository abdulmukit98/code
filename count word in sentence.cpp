#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        how many word in a string

        stringstream need char token[20]   array
        strtok need  char* token;

        char* token dont need memset

    */
    char s[200];
    memset(s,0x0,sizeof(s));
    gets(s);

    vector<string> word;
    char token[20];
    memset(token,0x0,sizeof(token));

    /**
        method 3 basic
    */
    int cnt=0, d=0;
    for(int i=0; i<=strlen(s);i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            if(strlen(token) > 0) cnt++;
            d=0;
            memset(token,0x0,sizeof(token));
            continue;
        }
        token[d]=s[i];
        d++;
    }
    printf("method basic:\nnumber of word: %d\n",cnt);

    ///method 1 stringstream
    stringstream func(s);
    while(func>>token)
    {
        word.push_back(token);
    }
    printf("method 1:\nnumber of word: %d\n",word.size());


    /**
        method 2 strtok
    */
    vector<string> word2;
    char* token2;
    token2 = strtok(s," ");

    while(token2 != null)
    {
        word2.push_back(token2);
        token2 = strtok(null, " ");
    }
    printf("method 2:\nnumber of word: %d\n",word2.size());


    return 0;
}

