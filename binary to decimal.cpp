#include<bits/stdc++.h>
using namespace std;
#define null NULL
long long binToDec(long long num);

int main()
{
    /***
        binary to decimal

    */
    long long num; scanf("%lld",&num);

    printf("%lld\n",binToDec(num));

    return 0;
}

long long binToDec(long long bin)
{
    /**
        (11) = 1011
             = 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0
             = 8     +   0   +  2  + 1
             = (11)
    */
    long long dec=0, i=0;
    while(bin != 0)
    {
        dec = dec + bin%10 * pow(2,i);

        i++;
        bin = bin/10;
    }
    return dec;
}
