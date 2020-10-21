#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*** lightOJ 1069


    */

    int test; scanf("%d",&test);
    for(int i = 0; i<test; i++)
    {
        int sec = 0;
        int f_me, f_lift;
        scanf("%d %d", &f_me, &f_lift);

        int dif = abs(f_me - f_lift);
        sec = sec + 4 * dif;            // lift coming
        sec = sec + 3;  // door open
        sec = sec + 5;  //enter
        sec = sec + 3;  // door close

        dif = f_me - 0;  // downward
        sec = sec + 4 * dif;    // going down
        sec = sec + 3;  //door open
        sec = sec + 5;  // exit lift

        printf("Case %d: %d\n", i+1, sec);
    }

    return 0;
}


