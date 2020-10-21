#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long


int main()
{
    /***
        lightOJ 1113 Discover the web


        pre-calculate
    */

    char current[60];

    char cmd[10];
    char url[60];

    string s1;
    stack <string> backword;
    stack <string> forwards;

    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        ///remove previous cycle junk
        while(!forwards.empty())
            forwards.pop();
        while(!backword.empty())
            backword.pop();
        memset(current, 0x0, sizeof(current));

        printf("Case %d:\n",t);
        strcpy(current,"http://www.lightoj.com/");


        while(scanf("%s",cmd) )
        {
            ///1
            if(strcmp(cmd,"QUIT")==0) break;

            /**2 VISIT   URL
                          |
                         \|/
                 ------<-current
                 |
                \|/                       empty
            -----.---                   ---------
            |       |                   |       |
            ---------                   ---------
            |       |                   |       |
            ---------                   ---------
            |       |                   |       |
            ---------                   ---------
            backward                     forward

            */
            if(strcmp(cmd,"VISIT")==0)
            {
                memset(url,0x0,sizeof(url));
                scanf("%s",url);
                backword.push(current);
                memset(current,0x0,sizeof(current));
                strcpy(current,url);
                printf("%s\n",current);

                while(!forwards.empty())
                    forwards.pop();
            }

            /**3 BACK

                 -------->current-----------
                 ^                         |
                 |                        \|/
            -----.---                   ---.-----
            |       |                   |       |
            ---------                   ---------
            |       |                   |       |
            ---------                   ---------
            |       |                   |       |
            ---------                   ---------
            backward                     forward

            */
            if(strcmp(cmd,"BACK")==0)
            {
                if(backword.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    forwards.push(current);
                    s1 = backword.top();
                    backword.pop();
                    memset(current, 0x0, sizeof(current));
                    for(int j=0; j<s1.size();j++)
                        current[j]=s1[j];
                    printf("%s\n",current);
                }
            }

            /**4 FORWARD


                 ---------current<----------
                 |                         ^
                \|/                        |
            -----.---                   ---------
            |       |                   |       |
            ---------                   ---------
            |       |                   |       |
            ---------                   ---------
            |       |                   |       |
            ---------                   ---------
            backward                     forward

            */
            if(strcmp(cmd,"FORWARD")==0)
            {
                if(forwards.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    backword.push(current);
                    memset(current,0x0,sizeof(current));
                    s1 = forwards.top();
                    forwards.pop();
                    for(int j=0; j<s1.size(); j++)
                        current[j]=s1[j];
                    printf("%s\n",current);
                }
            }
            ///while loop
            memset(cmd,0x0,sizeof(cmd));
        }
        ///for loop
    }

    return 0;
}


