#include<bits/stdc++.h>
using namespace std;
int rev(int num);
int main()
{
    /**nth palindrome number*/
    int n;
    printf("Index: ");
    scanf("%d",&n);
    int arr[n];

    int num = 1, x;
    for(int i = 0; i<n; )
    {
        while( num != rev(num))
        {
            num++;
        }
        arr[i] = num;
        num++;
        i++;
    }

    for(int i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }

    printf("\n\n%dth pallindrome number is: %d\n", n, arr[n-1]);

    return 0;
}

int rev(int num)
{
    int rev = 0;
    int x;

    while(num != 0){
        x = num % 10;
        rev = rev * 10 + x;
        num = num / 10;
    }
    return rev;
}
