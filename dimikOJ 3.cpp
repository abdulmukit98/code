#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)



int main() {
    /*
        subeen 3
     */

    int n = 1000;
    while (n>0)
    {
        printf("%d\t%d\t%d\t%d\t%d\t\n", n, n-1, n-2, n-3, n-4);
        n = n-5;
    }

    return 0;
}

