#include<bits/stdc++.h>
using namespace std;
#define MAX 15000
bool isPrime(long long n);
void primeList();

long long arr[MAX];
long long d = 2;

int main()
{
    /**
        Timus 1086

        Given k , then k times integer,  for each integer, calculate nth prime number

    */
    primeList();    /** reload arr with prime numbers */

    int k, a; scanf("%d",&k);
    for(int i = 0; i<k; i++)
    {
        scanf("%d", &a);
        printf("%lld\n", arr[a-1]);
    }

    return 0;
}

bool isPrime(long long n){
    if(n<=1) return false;
    for(long long i = 2; i*i <= n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

void primeList()
{
    for(int i = 0 ; i<MAX;)
    {
        while(isPrime(d) != true) d++;
        if(isPrime(d) == true)
        {
            arr[i] = d;
            d++;
            i++;
        }
    }
}
