#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*** lightOJ 1072

    n times bullet in pistol barrel.
    each bullet takes  ( 2*pi / n )  degree angle

    total bullet circle take 2*theta = 2*pi/n
    half  ( for center to radius )
                                theta = pi/n
              /
             /
            /X
           /
          /             sin(theta) = x / (R-x)
         /|             Rsin(theta) - xsin(theta) = x
    R-X / |             Rsin(theta) = x + xsin(theta)
       /  | X           x = Rsin(theta) / (1 + sin(theta))
      /   |
     /_0  |             where theta = pi/n
    /_|___|

    */

    int test; scanf("%d",&test);
    for(int i = 1; i<= test; i++)
    {
        double  R;
        int n;
        scanf("%lf %d", &R,&n);
        double theta;
        double pi = acos(-1);

        //two theta = 2*pi / n
        theta = 2*pi / (2*n);

        double x;  // bullet radius
        x = R * sin(theta) / (1 + sin(theta));
        printf("Case %d: %lf\n",i, x);
    }


    return 0;
}


