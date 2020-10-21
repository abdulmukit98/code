#include<bits/stdc++.h>
using namespace std;
int main()
{

    /** Triangle angle from slides*/
    double slideA, slideB, slideC;
    double angleA, angleB, angleC;

    printf("Triangles angle from slides\n\nEnter three slides of triangle: ");
    scanf("%lf %lf %lf", &slideA, &slideB, &slideC);

    /**  Cos(C) = ( a^2 + b^2 - c^2 ) / 2*a*b */

    angleC = acos( (pow(slideA,2) + pow(slideB,2) - pow(slideC,2)) / (2 * slideA * slideB) );
    angleB = acos( (pow(slideC,2) + pow(slideA,2) - pow(slideB,2)) / (2 * slideC * slideA) );
    angleA = acos( (pow(slideB,2) + pow(slideC,2) - pow(slideA,2)) / (2 * slideB * slideC) );

    double pi = acos(-1);

    angleA = angleA * 180 / pi;
    angleB = angleB * 180 / pi;
    angleC = angleC * 180 / pi;

    if(angleA > 0 && angleB > 0 && angleC > 0){

    printf("Angle A: %lf\nAngle B: %lf\nAngle C: %lf\n\n", angleA, angleB, angleC);
    printf("total %lf\n\n",angleA+angleB+angleC);

    }else{
    printf("Not a valid triangle \n\n");
    }

    return 0;
}
