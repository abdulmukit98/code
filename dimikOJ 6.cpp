#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)


int main() {
    /*
        subeen 6
     */

    int test;
    scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        string s1;
        cin>>s1;
        int a = s1[0] - '0';
        int b = s1[4] - '0';


        printf("Sum = %d\n",a+b);

    }
    return 0;
}

