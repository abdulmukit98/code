#include<bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long

///create arr beyond limit
/// create one clean array. not every time function called
ll arr[10005];
ll process(ll a, ll b, ll c, ll d,  ll e, ll f, ll n);

int main()
{
    /***
        lightOJ 1006 - Hex-a-bonacci

    */
    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        ll a,b,c,d,e,f,n;
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        ll ans = process(a,b,c,d,e,f,n);

        printf("Case %d: %lld\n",i,ans);
    }

    return 0;
}

ll process(ll a, ll b, ll c, ll d,  ll e, ll f, ll n)
{
    ll mod = 10000007;

    arr[0] = a%mod;
    arr[1] = b%mod;
    arr[2] = c%mod;
    arr[3] = d%mod;
    arr[4] = e%mod;
    arr[5] = f%mod;


    if(n>=6)
        for(ll i=6; i<=n; i++)
        {
            ///        (a+b)%c = ((a%c)+(b%c))%c
            arr[i] = (arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4] + arr[i-5] + arr[i-6])%mod;
        }

    return arr[n];
}



