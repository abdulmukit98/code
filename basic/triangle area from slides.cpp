#include<bits/stdc++.h>
using namespace std;
int main()
{

    /** Triangle area from slides*/
    double slideA, slideB, slideC;
    double area;

    printf("Triangles area from slides (Heron's Formula)\n\nEnter three slides of triangle: ");
    scanf("%lf %lf %lf", &slideA, &slideB, &slideC);

    /** area = sqrt( s * (s-a) * (s-b) * (s-c) )

        where s is semiperimeter =  (a+b+c)/2
    */

    double s = (slideA + slideB + slideC) / 2;
    area = sqrt( s * (s-slideA) * (s-slideB) * (s-slideC) );

    if(area > 0){
        printf("Area: %lf\n\n"  , area);
    }else{
        printf("Not a valid triangle\n\n");
    }


    return 0;
}
