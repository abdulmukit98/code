#include<bits/stdc++.h>
using namespace std;
int fact(int num);
int main()
{
    /**

    nCr = n! / (r! * n-r!)

    */

    printf("nCr = n! / (r! * n-r!) \nEnter n and r: ");
    int n, r; scanf("%d %d",&n, &r);

    printf("nCr: %d\n", fact(n) / (fact(r) * fact(n-r)) );

}

int fact(int num){
    int mul = 1;
    for(int i = 1; i<=num; i++)
        mul *= i;

    return mul;
}
