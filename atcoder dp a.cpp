// problem description https://vjudge.net/problem/AtCoder-dp_a
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

ll arr[100005];
ll mem[100005];
ll parent[100005];
ll n;
ll dp();

int main() {
    /*
        B frog1

     */

    scanf("%lld",&n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld",&arr[i]);
    }

    ll result = dp();
    printf("%lld\n",result);

    return 0;
}

ll dp()
{
    //bottom up
    mem[1] = 0;
    mem[2] = abs(arr[2]- arr[1]);

    parent[1] = -1;
    parent[2] = 1;

    for (int i = 3; i <= n; i++) {
        ll jump1;
        ll jump2;
        // jump from one stone back
        jump1 = mem[i-1] + abs(arr[i-1] - arr[i]);
        // jump from two stone back
        jump2 = mem[i-2] + abs(arr[i-2] - arr[i]);


        // which jump incurred minimal cost
        // some case both jump may be same. then chose anyone
        if(jump1 <= jump2)
        {
            //printf("jump1\n");
            mem[i] = jump1;
            parent[i] = i-1;
        }
        else if(jump2 < jump1)
        {
            //printf("jump2\n");
            mem[i] = jump2;
            parent[i] = i-2;
        }

    }
    /* path printing
         * 1 3 5 6
     */
    ll k = n;
    while (parent[k] != -1) // root
    {
        printf("%d --> %lld\n",k, parent[k]);
        k = parent[k];
    }
    printf("\n");

    return mem[n];
}
