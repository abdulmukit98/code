#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** Series 1 + (2 + 3*4) + (5 + 6*7 + 8*9*10) +......+ nth term */
    printf("Series 1 + (2 + 3*4) + (5 + 6*7 + 8*9*10) +......+ nth term");
    printf("\nEnter n: ");
    int n; scanf("%d",&n);


    int x=1, sum = 0, mul = 1, term = 0;
    for(int i = 1; i<=n; i++){

        term = 0;
        for(int j = 1; j<=i; j++ )
        {

            mul = 1;
            for(int k = 1; k<= j; k++){
                mul = mul * x;
                x++;
            }
            term += mul;
        }
        sum += term;
    }

    printf("Sum: %d\n", sum);

}
