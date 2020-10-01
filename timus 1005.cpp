#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

ll processing(ll arr[], int digit);

int main() {
    /*
     * pile of stone
     *
     * number of pile == number of base(k) ---------------------2
     * number of stone == number of digit(n) --------0 - 20 digit
     * all possible shuffle of the n-digit base
     *
     *           if n = 4 ----  shuffle 2^4 = 16
     *           0000
     *           0001
     *           0010           total combination
     *           0011           base^(num_of_digit)
     *           0100           k^n
     *           0101           2^n
     *           0110
     *           0111           0-7       0       --- 2^(n-1) -1
     *                          8-15      2^(n-1) --- 2^n -1
     *
     *           1000           here 1st half is the mirror
     *           1001           of second half
     *           1010
     *           1011           we can take one half to reduce
     *           1100           time complexity
     *           1101
     *           1110           we will take second half
     *           1111           so that leading 0 of first half
     *                          dont perish
     *      two group
     *              team_zero
     *              team_one
     * best of luck
     * */

    int n; scanf("%d",&n);
    ll stone[n];
    for (int i = 0; i < n; ++i) {
        scanf("%lld",&stone[i]);
    }

    // exception
    if(n==1)
    {
        printf("%lld\n",stone[0]);
        return 0;
    }

    // binary n digit varianc 2nd half
    // limit 2^(n-1) to 2^n -1

    int lower = pow(2 , n-1);
    int upper = pow(2, n) -1;
    ll min = LONG_LONG_MAX;

    for (int digit = lower; digit <= upper; ++digit) {
        if(processing(stone, digit) < min)
            min = processing(stone, digit);
    }

    printf("%lld\n",min);

    return 0;
}

ll processing(ll arr[], int digit)
{
    ll team_zero = 0;
    ll team_one = 0;
    ll index = 0;

    while (digit != 0)
    {
        ll rem = digit%2;
        digit = digit / 2;

        if(rem == 0) team_zero = team_zero + arr[index];
        if(rem == 1) team_one = team_one + arr[index];
        index++;
    }

    return abs(team_zero - team_one);
    // we want this difference tobe minimal
}
