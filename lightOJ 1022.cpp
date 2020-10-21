#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*** lightOJ 1022

    find the rest part of the square from the circle

    square X^2 - circle pi*r^2

    */

    int test; scanf("%d",&test);
    for(int i = 0; i<test; i++)
    {
        double radius; scanf("%lf",&radius);
        double pi = 2 * acos(0.0);
        double circle_area = pi * pow(radius, 2);

        double squareX = radius*2;
        double sq_area = pow(squareX, 2);

        double ans = sq_area - circle_area + pow(10, -8);   // add a small value to avoid precision

        printf("Case %d: %.02lf\n",i+1, ans);
    }

    return 0;
}


