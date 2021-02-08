#include<bits/stdc++.h>
using namespace std;
int main()
{
    /**circle perimeter from radius*/
    printf("circle perimeter from radius\n\nEnter radius: ");

    double radious, perimeter;
    scanf("%lf", &radious);

    double pi = acos(-1);

    printf("Perimeter: %lf \n\n", 2 * pi * radious);

    return 0;
}
