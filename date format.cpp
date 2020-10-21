#include<bits/stdc++.h>
using namespace std;
#define null NULL
int charToDec(char* arr);
int main()
{
    /***
        date format dd/mm/yyyy
        extract each value in integer forms
    */

    char date[20];
    memset(date,0x0,sizeof(date));
    gets(date);

    vector<int> dt;


    char* token;

    token = strtok(date, " /");

    while(token!=null)
    {
        int n = charToDec(token);
        dt.push_back(n);

        token = strtok(null,"/ ");
    }

    for(int i=0; i<dt.size(); i++) printf("%d\n",dt[i]);

    return 0;
}

int charToDec(char* arr)
{
    int sum=0,n=0;
    while(n<strlen(arr))
    {
        /** i=0
            sum = 0
            lets text = 21156
            sum = sum * 10 + text[i]
            i++;

            sum = 0x10 + 2 = 2
            sum = 2x10 + 1 = 21
            sum = 21x10 + 1 = 211
            sum = 211x10 + 5 = 2115
            sum = 2115x10 + 6 = 21156

            from reverse
            i = strlen(text-1)
            sum = 0;
            d=0
            sum = text[i] * 10^d + sum
            d++;


        */
        char c = arr[n];
        int i = c - '0';
        sum = sum*10 + i;
        n++;
    }
    return sum;
}


