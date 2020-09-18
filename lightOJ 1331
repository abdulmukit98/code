#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1331 Agent J


                                a = R1+R2
                       _______________________
                       R1                  R2
                    _____________\./_______________
                    \B           / \            C/
                     \          /   \           /
                      \        /     \         /
                     R1\      /       \       /R2
                        \    /         \     /
                         \  /           \   /
                         _\/_____________\_/_   b = R2+R3
           c = R1+R3      /\              /\
                            \            /
                             \          /
                           R3 \        /R3
                               \      /
                                \    /
                                 \ A/
                                  \/


            area of triangle = sqrt(s(s-a)(s-b)(s-c))
            where
                s = a+b+c / 2

            cosB = (a^2 + c^2 - b^2) / 2*a*c
               B = acos( (a^2 + c^2 - b^2) / 2*a*c )

            again circle area = pi*r*r

            for B angle area delB =  pi*R1*R1 * B/2*pi
                                  =  R1 * R1 * B / 2


            the area of middle place =  area or triangle - (delA + delB + delC)
    */


    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {

        double R1,R2,R3;
        scanf("%lf %lf %lf",&R1, &R2, &R3);

        ///slides
        double a = R1+R2;
        double b = R2+R3;
        double c = R1+R3;

        double s = (a+b+c)/2.0;
        double areaT = sqrt(s*(s-a)*(s-b)*(s-c));

        ///Angles
        double A = acos( (pow(b,2) + pow(c,2) - pow(a,2)) / (2.0*b*c) );
        double B = acos( (pow(c,2) + pow(a,2) - pow(b,2)) / (2.0*c*a) );
        double C = acos( (pow(a,2) + pow(b,2) - pow(c,2)) / (2.0*a*b) );

        ///del  pi*r*r * 0/2pi
        double delA = pow(R3,2) * A /2.0;
        double delB = pow(R1,2) * B /2.0;
        double delC = pow(R2,2) * C /2.0;

        double del = areaT - (delA+delB+delC);

        printf("Case %d: %.10lf\n",i, del);

    }


    return 0;
}
