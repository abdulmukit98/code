#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*** lightOJ 1053

                /|
               / |
             C/  | B
             /  _|
            /  | |
           -------
              A

           if ang = 90
            C^2 = A^2 + B^2

    */

    int test; scanf("%d",&test);
    for(int i = 0; i<test; i++)
    {
        int A,B,C;
        scanf("%d %d %d",&A, &B, &C);

        A = pow(A,2);
        B = pow(B,2);
        C = pow(C,2);

        if( A == B+C || B == C+A || C == A+B) printf("Case %d: yes\n",i+1);
        else printf("Case %d: no\n", i+1);

    }

    return 0;
}


