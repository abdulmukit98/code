#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*** lightOJ 1107

          x1 y2 _____________ x2 y2
                |           |
                |           |
                |           |
                |           |
                |           |
                |           |
                |           |
          x1 y1 |-----------| x2 y1


    */

    int test; scanf("%d",&test);
    for(int i = 1; i <= test; i++)
    {
        // land area
        int x1, y1, x2, y2;
        scanf("%d %d %d %d" ,&x1, &y1, &x2, &y2);


        printf("Case %d:\n" , i);
        int cow; scanf("%d", &cow);
        for(int j = 0; j<cow; j++)
        {
            // cow position
            int x, y;
            scanf("%d %d", &x, &y);

            if( ( x>x1 && x<x2 ) || ( x>x2 && x<x1 ) )
                if( (y>y1 && y<y2) || (y>y2 && y<y1) )
                    printf("Yes\n");
                else printf("No\n");
            else printf("No\n");
        }

    }


    return 0;
}


