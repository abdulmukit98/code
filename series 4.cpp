#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** Series 1 + (2+3) + (4+5+6) + nth term */
    printf("Series 1 + (2+3) + (4+5+6) + nth term");
    printf("\nEnter n: ");
    int n; scanf("%d",&n);


    int x = 1, sum = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++ )
        {
            sum += x;
            x++;
        }
    }

    printf("Sum: %d\n", sum);

}
