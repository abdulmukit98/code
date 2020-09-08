#include<bits/stdc++.h>
using namespace std;
long long bin1count(long long num);

int main()
{
    /*** lightOJ 1182
        
        number of 1 in binary number

    */

    int test; scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        long long num; scanf("%lld",&num);
        if(bin1count(num) %2 == 0 )printf("Case %d: even\n",i );
        if(bin1count(num) %2 == 1 )printf("Case %d: odd\n",i );
    }


    return 0;
}

long long bin1count(long long num)
{
    long long counT = 0, reminder;
    while(num != 0)
    {
        reminder = num % 2;
        if(reminder == 1) counT++;
        num = num/2;
    }
    return counT;
}
