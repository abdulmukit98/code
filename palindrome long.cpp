#include<bits/stdc++.h>
using namespace std;
long long rev(long long num);
int main()
{
    /** nth palindrome

    n <= 10^9

    */

    printf("nth palindrome large 5\nEnter n: ");
    long long n; scanf("%lld",&n);
    long long arr[n], d = 1;

    for(long long i = 0; i<n; )
    {

        while( d != rev(d) )
            d++;

        if( d == rev(d) )
        {
            arr[i] = d;
            d++;
            printf("%lld\n",arr[i]);
            i++;
        }

    }




}

long long rev(long long num){
    long long x = 0;

    while(num != 0){
        x = 10*x + num%10;
        num = num / 10;
    }
    return x;
}
