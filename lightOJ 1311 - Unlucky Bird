#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1311 - Unlucky Bird


    */


    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        double t1_velocity, t2_velocity, bird_velocity;
        double t1_acc, t2_acc;
        scanf("%lf %lf %lf %lf %lf",&t1_velocity, &t2_velocity, &bird_velocity, &t1_acc, &t2_acc);


        /**
                >-------------->|<--------------------------<
                        x1                   x2

                        v^2 = u^2 - 2as
                        0^2 = u^2 - 2as
                        s = u^2 / 2a

                        x1 +  x2 = d

        */
        double t1_dis =  pow(t1_velocity,2) / (2 * t1_acc);
        double t2_dis =  pow(t2_velocity,2) / (2 * t2_acc);

        double total_dis = t1_dis + t2_dis;

        /**
                >-------------->|<--------------------------<
                        x1                   x2

                        v = u - at
                        0 = u - at
                        t = u / a

                        t second passed before collapse

                        time to stop  train1 and train2  may be different
                        then we will take largest one

                        Bird got t second to fly
                        bird_distance =  t * bird_velocity
        */

        double time = t1_velocity / t1_acc;
        double time2 = t2_velocity / t2_acc;
        double bird_time = max(time, time2);

        double bird_dis = bird_time * bird_velocity;

        printf("Case %d: %.10lf %.10lf\n",i, total_dis, bird_dis);
    }


    return 0;
}
