#include<bits/stdc++.h>
using namespace std;
#define null NULL

int main()
{
    /***
        an array of 0 and 1
        print how maximum number of 1 is together
    */

    int n; scanf("%d",&n);
    int a;
    bool flag=false;
    int cnt=0, mx=-1;

    for(int i=0; i<n; i++){
      scanf("%d",&a);

        if(a == 1)
        {
            if(flag==false)
            {
                cnt = 0;
            }
            flag=true;
            cnt++;
        }
        else{
            flag=false;
        }
        if(cnt > mx) mx = cnt;
    }

    printf("most sequential 1: %d\n",mx);



    return 0;
}

