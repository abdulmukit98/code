#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

ll hexa_fib(ll a, ll b, ll c, ll d, ll e, ll f, ll n);

int main() {
    /*

        A- Hex a bonacci optimized

     */

    int test; scanf("%d",&test);
    for (int t = 1; t <= test; ++t) {
        ll a, b, c, d, e, f, n;
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a, &b, &c, &d, &e, &f, &n);

        ll result = hexa_fib(a, b, c, d, e, f, n);
        printf("Case %d: %lld\n",t, result);
    }

    return 0;
}

ll hexa_fib(ll a, ll b, ll c, ll d, ll e, ll f, ll n)
{
    if (n == 0) return a % 10000007;
    if (n == 1) return b % 10000007;
    if (n == 2) return c % 10000007;
    if (n == 3) return d % 10000007;
    if (n == 4) return e % 10000007;
    if (n == 5) return f % 10000007;

    n>5;
    ll g;
    for (int i = 6; i <= n; ++i) {
        g = a + b + c + d + e + f;
        g = g % 10000007;

        a = b;
        b = c;
        c = d;
        d = e;
        e = f;
        f = g;
    }

    return  g;
}
