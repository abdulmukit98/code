#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        string pattern matching

    */
    char s[200];
    memset(s,0x0,sizeof(s));
    gets(s);

    char token[20];
    memset(token,0x0,sizeof(token));
    gets(token);

    int freq = 0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] == token[0])
        {
            int k=i;
            bool flag = true;
            for(int j=0; j<strlen(token); j++)
            {
                if(s[k] == token[j])
                {
                    flag = true;
                    k++;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag==true)
            {
                freq++;
                printf("'%s' lies in index: %d\n",token,i);
            }
        }
    }
    printf("Frequency is: %d\n",freq);

    return 0;
}

