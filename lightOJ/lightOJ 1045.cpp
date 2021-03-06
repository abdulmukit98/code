#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

#define limit 1000007
double arr[limit];

int main()
{
    /***
        lightOJ 1045 factorial of digit
        
                            digit
        log(10) = 1         1+1
        log(100) = 2        2+1
        log(1000) = 3       3+1
        
        log(5!) = log(120) = 2...+1
        
        log(5*4*3*2*1) = log(5) + log(4) + log(3) + log(2) + log(1)     +  1
        
        

     1)   log(a*b) = log(a) + log(b)

    2) log(a)/log(base) + log(b)/log(base)+log(c)/log(base)  =  (log(a) + log(b) + log(c)) / log(base)

        log(1) = 0
        so to count we add extra 1
        noOfDigit (5!) = log(5*4*3*2*1) + 1;
        log(5)+log(4)+log(3)+log(2)+log(1)  + 1

        pre-calculate
    */
    arr[0]=0;
    for(int i=1; i<limit; i++)
    {
        arr[i] = arr[i-1] + log(i);
    }


    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        int n, base;
        scanf("%d %d",&n,&base);

        double ans = arr[n] / log(base);
        ans = floor(ans) + 1;
        printf("Case %d: %.0lf\n",t, ans);
    }

    return 0;
}


