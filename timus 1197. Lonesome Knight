#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

int main()
{
    /**
        timus 1197. Lonesome Knight

    */
    int test; scanf("%d",&test);
    char s[3];
    for(int i=0; i<test; i++)
    {
        scanf("%s",s);
        int left = s[0]-'a';
        int right = 'h'-s[0];
        int up = '8' - s[1];
        int down = s[1] - '1';

        //printf("left\tright\tup\tdown\n");
        //printf("%d    \t%d    \t%d    \t%d\n",left, right, up, down);

        /**
                    up
            ---------------------
            |   | 0 |   | 0 |   |
            ---------------------
            | 0 |   |   |   | 0 |
     left   ---------------------   right
            |   |   | 1 |   |   |
            ---------------------
            | 0 |   |   |   | 0 |
            ---------------------
            |   | 0 |   | 0 |   |
            ---------------------
                    down

        */
        int cnt = 0;
        if(left>=2 && up >=1) cnt++;
        if(left>=2 && down>=1) cnt++;
        if(right>=2 && up>=1) cnt++;
        if(right>=2 && down>=1) cnt++;
        if(up>=2 && left>=1) cnt++;
        if(up>=2 && right>=1) cnt++;
        if(down>=2 && left>=1) cnt++;
        if(down>=2 && right>=1) cnt++;

        printf("%d\n",cnt);
    }


    return 0;
}
