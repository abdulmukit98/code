#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** Series 1 - 2 + 3 - 4 + 5 + .... + nth term */
    printf("Series 1 - 2 + 3 - 4 + 5 + .... + nth term");
    printf("\nEnter n: ");
    int n; scanf("%d",&n);


    int sum = 0;
    for(int i = 1; i<=n; i++){
        if(i%2 == 0 ) sum -= i;
        else sum += i;
    }


    printf("Sum: %d\n", sum);

}
