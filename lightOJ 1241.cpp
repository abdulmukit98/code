#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL

int main() {

    /**
        lightOJ 1241 pinocchio
    */
    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        int n; scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        // initial nose size
        int d = 2, dif;
        // lie count
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            dif = arr[i] - d;
            // nose can increase at least 1cm to atmost 5cm
            cnt = cnt + dif / 5;
            if(dif%5 >0) cnt = cnt + 1;
            d = arr[i];
        }

        printf("Case %d: %d\n",t, cnt);
    }

    return 0;
}

