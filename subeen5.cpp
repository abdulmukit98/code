#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)


int main() {
    /*
        subeen 5
     */

    int test; scanf("%d",&test);
    for (int t = 1; t <= test; ++t) {
        int n;
        scanf("%d",&n);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("*");
            }
            printf("\n");
        }

        // otherwise it place double \n in end
        if (t != test)printf("\n");
    }

    return 0;
}

