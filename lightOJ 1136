#include<bits/stdc++.h>
using namespace std;
long long counT(long long n);

int main()
{
    /*** lightOJ 1136

    a number is divisible by 3 if its sum of all digit is divisible by 3

    123 = 1+2+3 = 6/3 = 2
    12345 = 1+2+3+4+5 = 15/3 = 5
    123456 = 1+2+3+4+5+6 = 21/3 = 7

    1 2 3 4 5 6 7 8 .... n  = n*(n+1)/2
    */
    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        long long A, B;
        scanf("%lld %lld",&A, &B);

        long long ans = counT(B) - counT(A-1);
        printf("Case %d: %lld\n", i, ans);
    }


    return 0;
}

long long counT(long long n)
{
    /**
        Lets  12345678910;
                            sum of digit
                            n (n+1) /2

        1                   1
        12                  3
        123                 6

        1234                10
        12345               15
        123456              21

        1234567             28
        12345678            36
        123456789           49

        12345678910         59

        for batch 3 set , the first element not divisible by 3
        the second and third element always divisible by 3

        so num / 3  = number of batch
        where each batch contain two number divisible by 3



    int c = 0, sum;
    for(int i = 3; i<=n; i++)
    {
        sum = i*(i+1) /2;
        if(sum%3 == 0)
            c = c+1;
    }
     */
    long long batch = n / 3;
    long long divisible = batch * 2;

    if(n % 3 == 1) divisible = divisible + 0;
    if(n % 3 == 2) divisible = divisible + 1;   ///second element of set is divisible by 0
    if ( n % 3 == 0) divisible = divisible + 0;


    return divisible;
}
