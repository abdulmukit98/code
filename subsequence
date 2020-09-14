#include<bits/stdc++.h>
using namespace std;
#define null NULL
bool subsequence(char* arr, char* brr);
int main()
{
    /***
        subsequence

        check if B is subsequence to A
        if we found B by deleting some character from A
            the B is subsequence to A

        lets
            A = bangladesh
            B = bash
              = ba......sh    match

        lets
            B = dash
              =.......d.sh    not match

          order of B must be preserved
    */
    printf("subsequence\nEnter A and B: ");

    char A[30];
    memset(A,0x0,sizeof(A));
    scanf("%s",A);

    char B[10];
    memset(B,0x0,sizeof(B));
    scanf("%s",B);

    if(subsequence(A,B) == true) printf("'%s' is subsequence of '%s'\n",B,A);
    else printf("not subsequence\n");

    return 0;
}



bool subsequence(char* arr, char* brr)
{
    bool flag = true;
    int d=0;

    /** for subsequence  A must be bigger than B*/
    for(int i=0; i<strlen(arr); i++)
    {
        if(brr[d] == arr[i])
        {
            flag = true;
            d++;

            /// found total B
            if(d==strlen(brr)) break;
        }
        else continue;
    }

    /// if d == strlen(B) , total sequence found in loop
    if(d<strlen(brr)) flag = false;

    return flag;
}
