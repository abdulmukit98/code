#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

vector<ll> backup;
vector<ll> stk;
ll Partition(vector<ll> A, ll l, ll r);
void Quicksort(vector<ll> A, ll l, ll r);
ll c;

int main() {
    /*
     * timus 1082 Gaby Ivanushka
       the algorithm want an n-element array where
       Quicksort(l, r) produce c = n*n + 3n -4  for any accepted length n array

       Quicksort(A, l, r) is a recursive function which runs many loop
       to calculate c-value

       c runs in O(n^2) in Quicksort (n*n + 3n -4)

       Again we check multiple Quicksort call to assign the appropriate item

       our main function run O(n^2) to calculate backup stack :)

      ///basic
      for (int i = 0; i < n; ++i)
      {
            for (int j = 0; ; ++j)
            {
                c = 0;
                stk.push_back(j);
                ll len = stk.size();
                Quicksort(stk, 0, len-1);
                ll est = ( pow(len,2) + 3*len -4)/2;

                if(c == est)
                {
                    backup.push_back(j);
                    break;
                }
                else
                   stk = backup;
            }
        }

        this algortihm requir O(n^2)*O(n^2) to finish.
        for the worst case (n=1000) it rise to
                1000^4
                = 10^12
        which end up in time complexity error.


        // hence we have to extract the gist of this algorithm
        idea
            if we run the basic part block-commented in the main function,
            we can see that the code produce an array from 0 1 2 ......  n-1
            for any n value;
            we check this by keeping n valuelow < 100 to avoid time complexity
            but we get the point
            
            the algorthm requir an array of n-length in ascending order
            with no repeated element.
        
        Bonjure
        Happy codeing
    */

    ll n;
    scanf("%lld",&n);
    backup.clear();

    for (int i = 0; i < n; ++i) {
        backup.push_back(i);
    }
    for (int i = 0; i < backup.size(); ++i) {
        printf("%lld ",backup[i]);
    }


    return 0;
}


ll Partition(vector<ll> A, ll l, ll r)
{
    ll x=A[l],
            i=l-1,
            j=r+1,
            t;
    while(1)
    {
        do{--j; ++c;}
        while(A[j]>x);
        do{++i; ++c;}
        while(A[i]<x);
        if(i<j)
        {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }
        else return j;
    }
}

void Quicksort(vector<ll> A, ll l, ll r)
{
    ll n;
    if(l<r)
    {
        n=Partition(A, l,r);
        Quicksort(A, l,n);
        Quicksort(A, n+1,r);
    }
}
