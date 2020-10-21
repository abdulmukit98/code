#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*** lightOJ 1294   Positive Negative Sign

    let say n = 12  and m = 3

    -1 -2 -3 +4  +5  +6 -7 -8 -9 +10 +11 +12

    -1 +4  -2 +5  -3 +6    -7 +10  -8 + 11  -9 +12
    ___________________    _______________________
       3     3      3         3       3         3

            3*3                       3*3


    2 groups
    for each group  m^2

        since  n divisible by 2m
        no of groups = n/2m

        each group produce m^2

        total sum =  n/2m * m^2
                  =  n*m/2
    */


    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        long long n , m;
        scanf("%lld %lld", &n, &m);

        printf("Case %d: %lld\n",i, n*m/2);
    }


    return 0;
}
