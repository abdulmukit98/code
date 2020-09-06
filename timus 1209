#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
bool func(long long x);

int main()
{
    /**
        Timus 1209

        Given sequence : 110100100010000100000.......

        the 0 appears in  0, 1, 2, 3, .....
        =  n(n+1)/2

        position of every one is  x = 1 +  n(n+1)/2
                                    = (2 + n^2 + n ) /2
                                 2x = 2 + n^2 + n
                                 8x = 4 + 4n^2 + 4n
                             8x - 7 = 4n^2 + 4n + 1
                             8x - 7 = (2n + 1)^2
                       sqrt(8x - 7) = 2n + 1
                   sqrt(8x - 7) - 1 = 2n
             (sqrt(8x - 7) - 1) / 2 = n

        where n is integer for position(x) = 1

    */

    int n; scanf("%d",&n);
    long long k[n];
    for(int i = 0; i<n; i++) scanf("%lld",&k[i]);


    for(int i = 0; i<n; i++)
    {
        if(func(k[i]) == true)
            printf("1 ");
        else printf("0 ");
    }

    return 0;
}

/**    x = 1 +  n(n+1)/2
       n = (sqrt(8x - 7) - 1) / 2

checking from both side
*/

bool func(long long x)
{
    double ans = ( sqrt((double)8*x -7) -1 ) / 2.0;

    /** if the ans is fractional (pos 0) the typecasting long long reduce the number**/

    /**
    long long n = (long long) ans;
    if ( 1+ (n * (n+1)) /2 == x) return true;
    */
    if (ans - floor(ans) == 0) return true;
    return false;
}
