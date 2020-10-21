#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1211

                        ___________________________ a2 b2
                        |                         |
                        |                         |
                        |                         |
                        |                         |
                        |                         |
            ____________|___________x2 y2         |
            |           |          |              |
            |           |          |              |
            |           |          |              |
            |           |          |              |
            |           |__________|______________|
            |           a1 b1      |
            |                      |
            |                      |
            |                      |
            |______________________|
            x1 y1

            * the greater number form x1 y1    and   a1 b1
            * the smaller number form x2 y2    and   a2 b2



            case 2

                          _______________________________ a2 b2
                          |                             |
                          |                             |
                          |                             |
                          |                             |
            ______________|___________x2 y2             |
            |             |          |                  |
            |             |          |                  |
            |             |          |                  |        * the greater number form x1 y1    and   a1 b1
            |             |          |                  |        * the smaller number form x2 y2    and   a2 b2
            |             |          |                  |
            |             |          |                  |
            |             |          |                  |
            |             |a1 y1     |                  |
            |_____________|__________|                  |
            x1 y1         |                             |
                          |                             |
                          |                             |
                          |                             |
                          |_____________________________|
                        a1 b1



        case 3

            __________________________x2 y2
            |                        |
            |             ___________|___________________ a2 b2
            |             |          | x2 b2            |
            |             |          |                  |
            |             |          |                  |
            |             |          |                  |
            |             |          |                  |         * the greater number form x1 y1    and   a1 b1
            |             |          |                  |         * the smaller number form x2 y2    and   a2 b2
            |             |a1 y1     |                  |
            |_____________|__________|                  |
            x1 y1         |                             |
                          |                             |
                          |                             |
                          |                             |
                          |                             |
                          |_____________________________|
                        a1 b1



        * the upper-right co-ordinate must be bigger than lower-left co-ordinate
        * otherwise the cube don,t intercept

    */

    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        int n; scanf("%d",&n);

        int maxX1 = -1, maxY1 = -1, maxZ1 = -1;
        int minX2 = 1005, minY2 = 1005, minZ2 = 1005;

        int x1,y1,z1,x2,y2,z2;

        for(int j =0; j<n; j++)
        {
            scanf("%d %d %d %d %d %d",&x1, &y1, &z1, &x2, &y2, &z2);

            if(x1 > maxX1) maxX1 = x1;
            if(y1 > maxY1) maxY1 = y1;
            if(z1 > maxZ1) maxZ1 = z1;

            if(x2 < minX2) minX2 = x2;
            if(y2 < minY2) minY2 = y2;
            if(z2 < minZ2) minZ2 = z2;
        }


        /// the second co-ordinate must be greater than the first
        if((minX2 > maxX1) && (minY2 > maxY1) && (minZ2 > maxZ1))
        {
            long long volume = (minX2 - maxX1) * (minY2 - maxY1) * (minZ2 - maxZ1);
            printf("Case %d: %lld\n", i, volume);
        }
        else printf("Case %d: 0\n",i);


    }


    return 0;
}
