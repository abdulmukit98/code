#include<bits/stdc++.h>
using namespace std;
int fact(int num);
int main()
{
    /**
        Timus 1083
        n!!…! = n(n−k)(n−2k)…(n mod k), if k doesn’t divide n; n!!…! = n(n−k)(n−2k)…k, if k divides n

        k is number of !!!
     */

    int n;
    char s[20];
    scanf("%d %s", &n, &s);

    int len = strlen(s);
    int sum = 1;
    for(int i = n; i > 0; i = i - len)
    {
        sum  = sum * i;
    }
    printf("%d\n",sum);
}
