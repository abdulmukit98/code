#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** Series 1^2 + 2^2 + 3^2 +....+ n^2 */
    printf("Series 1^2 + 2^2 + 3^2 + .... + n^2");
    printf("\nEnter n: ");
    int n, sum=0 ; scanf("%d",&n);

    for(int i = 1 ; i <= n; i++)
        sum += pow(i,2);

    printf("Sum: %d\n", sum);
}
