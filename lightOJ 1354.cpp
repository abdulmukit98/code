#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

void tokenize(char* arr, vector<int> &vect);
void binToDec(vector<int> &vect);

int main() {
    /*
     * lightOJ 1354 Ip checking
     *
     * typecast char to int    atoi(str)
     *          string to int stoi(str)
     *
     * passing vector as reference in fuction
     * &vect
     */
    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        vector<int> dec_vect;
        char s1[100];
        cin>>s1;
        tokenize(s1, dec_vect);

        vector<int> bin_vect;
        char s2[100];
        cin>>s2;
        tokenize(s2, bin_vect);

        //convert bin_vect to decimal
        binToDec(bin_vect);

        bool flag=true;
        for(int i=0; i<dec_vect.size(); i++)
        {
            if(dec_vect[i] != bin_vect[i])
            {
                flag = false; break;
            }
        }

        if(flag == true) printf("Case %d: Yes\n",t);
        else printf("Case %d: No\n",t);
    }

    return 0;
}

// passing vector parameter as reference
void tokenize(char* arr, vector<int> &vect)
{
    vect.clear();
    char* token;
    token = strtok(arr, ".");
    while (token != null)
    {
        //cout<<token<<endl;
        int num = atoi(token);
        //cout<<num<<endl;
        vect.push_back(num);
        token = strtok(null, ".");
    }
}

// passing vector parameter as reference
void binToDec(vector<int> &vect)
{
    for(int i=0; i<vect.size(); i++)
    {
        int num = vect[i];
        int d=0, rem, dec=0;
        while (num != 0)
        {
            //last digit
            rem = num%10;
            num = num/10;
            dec = dec + rem * pow(2,d);
            // power
            d++;
        }
        vect[i] = dec;
    }
}
