#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        string length
            with library func
            without library func

        note: strlen count the length that occupied
              sizeof measure the total size

    */
    char s[100]; gets(s);

    printf("with strlen: %d\n",strlen(s));

    ///without library func
    int cnt=0;
    for(int i=0; ; i++)
    {
        if(s[i]==0) break;
        cnt++;
    }
    printf("without library: %d\n",cnt);


    return 0;
}

