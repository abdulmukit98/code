#include<bits/stdc++.h>
using namespace std;
#define null NULL
void lowercase(char* arr);
void lexicographical_smaller(char* arr, char* brr);
int main()
{
    /***
    In mathematics, the lexicographic or lexicographical order
    (also known as lexical order, dictionary order,alphabetical order )
    is a generalization of the way words are alphabetically ordered
    based on the alphabetical order of their component letters.
    */

    char s1[200], s2[200];
    memset(s1,0x0,sizeof(s1));
    memset(s2,0x0,sizeof(s2));

    scanf("%s %s",s1,s2);
    lowercase(s1);lowercase(s2);

    lexicographical_smaller(s1,s2);



    return 0;
}

void lowercase(char* arr)
{
    for(int i=0; i<strlen(arr); i++)
        if(arr[i]>='A' && arr[i]<='Z') arr[i] = arr[i]-'A'+'a';
}

void lexicographical_smaller(char* arr, char* brr)
{
    bool flag = true;
    for(int i=0; i<strlen(arr) && i<strlen(brr); i++)
    {
        if(arr[i]==brr[i]) flag = true;
        if(arr[i]<brr[i])
        {
            flag = false;
            printf("%s is lexicographically smaller than \n%s\n",arr,brr);
            return;
        }
        if(brr[i]<arr[i])
        {
            flag = false;
            printf("%s is lexicographically smaller than \n%s\n",brr,arr);
            return;
        }
    }
    if(flag == true && strlen(arr)==strlen(brr))
        printf("They are same\n");

    else if(flag == true && strlen(arr)<strlen(brr))
        printf("%s is lexicographically smaller than \n%s\n",arr,brr);
    else if(flag == true && strlen(brr)<strlen(arr))
        printf("%s is lexicographically smaller than \n%s\n",brr,arr);

    return;
}





