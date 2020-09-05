#include<bits/stdc++.h>
using namespace std;
int fact(int num);
int main()
{
    /** cosX from maclaurine series

        cosX = 1 - X^2/2! + X^4/4! - X^6/6! + X^8/8! - ..... + nth term

     */
     printf("Maclaurine Series\ncosX = 1 - X^2/2! + X^4/4! - X^6/6! + X^8/8! - ..... + nth term\n\n");
     printf("Enter value of X: ");
     int x,n;
     scanf("%d",&x);
     printf("Enter value of n: ");
     scanf("%d",&n);

     double sum = 1;
     for(int i = 1; i<=n-1; i++)
     {
         int k = i*2;
         double term = pow(x, k)/fact(k);
         if(i%2 != 0)
            sum = sum - term;
         if(i%2 == 0)
            sum = sum + term;

     }
     printf("cos%d: %lf",x, sum );
}

int fact(int num){
    int mul = 1;
    for(int i = 1; i<=num; i++)
        mul *= i;

    return mul;
}
