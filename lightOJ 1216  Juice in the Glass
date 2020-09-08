#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1216

          _________________
        ______________r_____
         ---------|---------
         \        |        /
          \       |       /
           \      | h    /
            \     |     /
             \    |    /        V = 1/3 * pi * r^2 * h
              \   |   /
               \  |  /
                \ | /
                 \|/
                  .



          ______________________________
        _______________________R__________
         ---------------|----------------
         \              |              /
          \             |             /
           \            |            /
            \           | h         /           V =  1/3  * pi * h  (R^2 + r^2 + R*r)
             \          |          /
              \         |         /
               \        |        /
                \       |       /
                 \______|___r__/
                  \-----|-----/
                    ----------



    */


    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        double R, r, h, p;
        scanf("%lf %lf %lf %lf", &R, &r, &h, &p);

        /***

          ______________________________
        _______________________R__________
         ---------------|----------------
         \              |              /
          \             |             /
           \            |            /      let new radius @
            \           | h         /
             \          |_____@____/        for h height radius increase from r to R
              \         |         /|                                        = R-r
               \        |        / |            p height radius increase = (R-r) / h * p
                \       |       /  | p
                 \______|___r__/   |            new radius @ = r + increase
                  \-----|-----/    |                         = r + (R-r)p/h
                    ----------
        */

        double new_radius = r + (R-r)*p/h;
        //printf("%lf\n",new_radius);

        double pi = acos(-1);
        double juice_volume = (1/3.0) * pi * p * (pow(new_radius,2) + pow(r,2) + new_radius * r);

        printf("Case %d: %.8lf\n",i,juice_volume);
    }


    return 0;
}
