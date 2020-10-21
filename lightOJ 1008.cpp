
#include<bits/stdc++.h>
using namespace std;


int main()
{
    /**
        LightOJ 1008

      7 ------ 49 48 47 46 45 44 43
               26 27 28 29 30 31 42
     5 ------  25 24 23 22 21 32 41
               10 11 12 13 20 33 40
     3  ------  9  8  7 14 19 34 39
                2  3  6 15 18 35 38
     1  ------  1  4  5 16 17 36 37
                   |     |    |
                   |     |    |
                   2     4    6


    */
    int k ; scanf("%d",&k);

    long long n, Floor, Ceil, mid, row, col, dist;

    for(int i = 0; i < k; i++)
    {

        n; scanf("%lld",&n);
        Floor = floor(sqrt(n));
        Ceil = ceil(sqrt(n));
        if(Floor == Ceil) Floor = Floor - 1;
        mid = pow(Floor, 2) +  ( pow(Ceil,2) - pow(Floor,2) ) / 2 + 1;

        //row, col;
        dist = abs(n-mid);
        if (Floor % 2 == 0)
        {
            if(n > mid )
            {
                row = Ceil;
                col = Ceil - dist;
            }
            if( n < mid )
            {
                col = Ceil;
                row = Ceil - dist;
            }
            if(n == mid)
            {
                row = Ceil;
                col = Ceil;
            }

        }
        else if(Floor % 2 != 0 )
        {
            if(n > mid)
            {
                col = Ceil;
                row = Ceil - dist;
            }
            if(n < mid)
            {
                row = Ceil;
                col = Ceil - dist;
            }
            if ( n == mid )
            {
                row = Ceil;
                col = Ceil;
            }
        }

        printf("Case %d: %lld %lld\n",i+1, col, row);

    }

    return 0;
}


