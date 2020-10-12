#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)



int main() {
    /*
        subeen 1
     */
    int test; scanf("%d",&test);
    for (int i = 0; i < test; ++i) {
        char  arr[107];
        scanf("%s",arr);
        int len = strlen(arr);

        int last = arr[len-1] - '0';
        if(last%2 == 0) printf("even\n");
        else printf("odd\n");

    }

    return 0;
}

