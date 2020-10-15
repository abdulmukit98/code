#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

// priority queue ascending order top 1 2 3 ..
priority_queue<int, vector<int>, greater<int>> Q;

int main() {
    /*
        subeen 4
     */
    while (!Q.empty()) Q.pop();

    int test; scanf("%d",&test);
    for (int t =1; t <= test; t++) {
        int n;
        scanf("%d", &n);

        for (int j = 1; j*j <= n; j++) {
            if (n%j == 0)
            {
                Q.push(j);
                if (j*j != n) Q.push(n/j);
            }
        }


        printf("Case %d: ", t);
        while (!Q.empty())
            if (Q.top() == n) printf("%d",Q.top()), Q.pop();        // no space in final element
            else
                printf("%d ",Q.top()), Q.pop();
        printf("\n");

    }


    return 0;
}

