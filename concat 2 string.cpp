#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        concat 2 string

        memset array to get rid of gurbage value

    */
    printf("Enter s1: ");
    char s1[100];
    memset(s1,0x0,sizeof(s1));
    gets(s1);

    printf("Enter s2: ");
    char s2[100];
    memset(s2,0x0,sizeof(s2));
    gets(s2);

    char s[200];
    memset(s,0x0,sizeof(s));

    ///Basic
    for(int i=0; i<strlen(s1); i++)
        s[i]=s1[i];
    printf("%s\n",s);

    for(int i=0; i< strlen(s2); i++)
        s[i+strlen(s1)] = s2[i];

    printf("%s\n",s);
    
    ///strcat
    memset(s,0x0,sizeof(s));
    strcat(s,s1);
    strcat(s,s2);
    printf("%s\n",s);

    return 0;
}

