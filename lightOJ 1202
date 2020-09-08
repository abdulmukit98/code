#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1202

    bishops move in chess board


    */

    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        long long x1, y1, x2, y2; scanf("%lld %lld %lld %lld",&x1, &y1, &x2, &y2);

        long long diff_x = abs(x1-x2);
        long long diff_y = abs(y1-y2);

            /** In Any same color
                    idea 1
                    if diff_x even   diff_y must be even
                    if diff_y odd   diff_y must be odd

                    idea 2
                    if  x1 + y1   even  then  x2 + y2  even
                    if  x1 + y1   odd   then  x2 + y2  odd

                     8   1 0 1 0 1 0 1 0
                     7   0 1 0 1 0 1 0 1
                     6   1 0 1 0 1 0 1 0
                     5   0 1 0 1 0 1 0 1
                     4   1 0 1 0 1 0 1 0
                     3   0 1 0 1 0 1 0 1
                     2   1 0 1 0 1 0 1 0
                     1   0 1 0 1 0 1 0 1

                         1 2 3 4 5 6 7 8

            */

        ///same color
        if( (x1+y1) % 2 ==  (x2+y2) % 2 )
        {
            if (diff_x == diff_y)   /// direct hit
                printf("Case %d: 1\n",i);
            else
                printf("Case %d: 2\n",i);
        }
        /// different color
        else
            printf("Case %d: impossible\n",i);


    }


    return 0;
}
