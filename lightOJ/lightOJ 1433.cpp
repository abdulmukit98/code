#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1433 - Minimum Arc Distance

                 .A
                /|.
               / |..          OA = sqrt((Ox-Ax)^2 + (Oy-Ay)^2)
              /  |...
             /   |....          X = acos( (OA*OA + OB*OB - AB*AB) / 2*OA*OB )
            /    |....
           /     |.....
          /      |.....          s = r * 0
         /\      |.....            = OA * X
      O / X\     |.....
        \  /     |.....
         \/      |.....
          \      |.....
           \     |....
            \    |....
             \   |...
              \  |..
               \ |.
                \|
                 .B
    */


    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        double Ox,Oy,Ax,Ay,Bx,By;
        scanf("%lf %lf %lf %lf %lf %lf", &Ox, &Oy, &Ax, &Ay, &Bx,&By);

        double OA = sqrt(pow(Ox-Ax,2) + pow(Oy-Ay,2));
        double OB = sqrt(pow(Ox-Bx,2) + pow(Oy-By,2));
        double AB = sqrt(pow(Ax-Bx,2) + pow(Ay-By,2));

        double theta = acos( (pow(OA,2) + pow(OB,2) - pow(AB,2)) / (2.0*OA*OB) );

        if(OA==OB)
        {
            double arc = OA * theta;
            printf("Case %d: %lf\n",i, arc);
        }

    }


    return 0;
}
