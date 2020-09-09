#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1305 area of parallelogram


                        Dx Dy
                           ___________ Cx Cy
                          /        . /
                         /       .  /
                        /      .   /
                       /     .    /           Dx = Cx - abs(Bx-Ax)
                      /    .     /            Dy = Cy - abs(By-Ay)
                     /   .      /
                    /  .       /
                   / .        /
            Ax Ay /__________/ Bx By



            Area = b*h
                 = a*b*sin(alpha)

            idea 2
            Area = Triangle ABC + Triangle ADC    ///they are equal
                 = 2 * triangle ABC
                 = 2 * sqrt(s(s-a)(s-b)(s-c))

                 s = a+b+c / 2
    */


    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        int Ax,Ay, Bx,By,  Cx,Cy,  Dx,Dy;

        scanf("%d %d %d %d %d %d", &Ax,&Ay, &Bx,&By, &Cx,&Cy);

        /// DONT USE abs() since difference sign matter
        Dx = Cx - (Bx-Ax);
        Dy = Cy - (By-Ay);



        double a = sqrt(pow(Bx-Ax, 2) + pow(By-Ay, 2));
        double b = sqrt(pow(Cx-Ax, 2) + pow(Cy-Ay, 2));
        double c = sqrt(pow(Bx-Cx, 2) + pow(By-Cy, 2));
        double s = (a+b+c) / 2.0;

        double half_triangle = sqrt(s*(s-a)*(s-b)*(s-c));
        double area = 2 * half_triangle;
        int ar = (int) area;

        printf("Case %d: %d %d %.0lf\n", i, Dx,Dy,area);
    }


    return 0;
}
