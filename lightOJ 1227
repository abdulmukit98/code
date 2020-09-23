#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
     *  lightOJ 1227 boiled eggs
     * */
    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        int n, limit, gm;
        scanf("%d %d %d", &n, &limit, &gm);
        int wei[n];
        for(int i=0; i<n; i++) scanf("%d",&wei[i]);

        int cnt=0, d=0;

         /* the code depict that
         *      n egg given
         *      bowl contain limit egg
         *      bowl contain gm gram of egg
         *
         *      its not compolsary that given n will always grater than limit
         *      n maybe less than limits
         *      if d touch limit loop no more
         * */
        for(int i=0; i<n && d<limit; i++)
        {
            cnt = cnt    + wei[i];
            if(cnt > gm) break;       // if cnt overflow skip the increment
            d = d+1;
        }
        printf("Case %d: %d\n",t, d);
    }

    return 0;
}

/**
 * udebug test case 1 give 4 extra value that may work for case 16
 * */
