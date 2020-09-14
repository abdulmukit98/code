#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

int main()
{
    /***
        timus 1020 rope

        length of rope = sum(distance of each adjacent nails) + 2*pi*r  ( total nail combined )
    */
    int test;
    double radius;
    scanf("%d %lf",&test,&radius);

    double x[test],y[test];
    double sum = 0;
    for(int i=0; i<test; i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
        if(i>0)
            sum = sum + sqrt(pow(x[i] - x[i-1], 2) + pow(y[i] - y[i-1],2));
    }
    /// last to first
    sum = sum + sqrt(pow(x[0]-x[test-1], 2) + pow(y[0]-y[test-1], 2));

    ///  all the nail combined to a 2 * pi * r length
    double pi = acos(-1);
    sum = sum + 2*pi*radius;

    printf("%.2lf\n",sum);

    return 0;
}
