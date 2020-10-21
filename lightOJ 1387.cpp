#include <bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long


int main() {
    /*
    *  lightOJ 1387 Setu
    * */

    int test; scanf("%d",&test);
    for (int t = 1; t <= test; ++t) {
        // no of operation
        int n;
        scanf("%d",&n);

        printf("Case %d:\n",t);

        ll balance = 0;
        for(int i=0; i<n; i++)
        {
            char op[10];
            scanf("%s",op);

            int donation;
            if (strcmp(op, "donate") == 0)
            {
                scanf("%d",&donation);
                balance = balance + donation;
            }

            if(strcmp(op, "report") == 0) printf("%lld\n",balance);

        }
    }

    return 0;
}

