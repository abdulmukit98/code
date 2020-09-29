#include <bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long
#define pi acos(-1)

ll leap_count(int y);
void tokenize(string date);
int processing(int month, int day, int year);
string MON;
int DAY;
int YEAR;


int main() {
    /*
     * lightOJ 1414
     */

    map<string, int> months;
    months["January"] = 1;
    months["February"] = 2;
    months["March"] = 3;
    months["April"] = 4;
    months["May"] = 5;
    months["June"] = 6;
    months["July"] = 7;
    months["August"] = 8;
    months["September"] = 9;
    months["October"] = 10;
    months["November"] = 11;
    months["December"] = 12;

    int test; scanf("%d",&test);
    getchar();
    for (int t = 1; t <= test; t++) {
        string  date1, date2;
        getline(cin, date1);
        getline(cin, date2);

        string m1, m2;
        int d1, d2;
        int y1, y2;

        MON=""; DAY=-1; YEAR=-1;
        tokenize(date1);
        m1 = MON; d1 = DAY; y1 = YEAR;

        MON=""; DAY=-1; YEAR=-1;
        tokenize(date2);
        m2 =MON; d2=DAY; y2 = YEAR;


        ll leap = 0;
        int res1, res2;
        res1 = processing(months[m1], d1, y1);
        res2 = processing(months[m2], d2, y2);
        // both same year
        if(y1 == y2)
        {
            if((res1==1 || res1==2) && (res2==2 || res2==3))
            leap = 1;
        } else if(y1 != y2)
        {
            if(res1 == 2 || res1 == 1) leap = leap + 1;
            if(res2 == 2 || res2 == 3) leap = leap + 1;
                                                 // remove y1 already
            leap = leap + ( leap_count(y2-1) - leap_count(y1) );
        }

        printf("Case %d: %lld\n",t,leap);
    }

    return 0;
}


ll leap_count(int y)
{
    ll cnt = 0;
    cnt = cnt + y / 4;
    cnt = cnt - y / 100;
    cnt = cnt + y / 400;

    return cnt;
}

void tokenize(string date)
{
    for (int i = 0; i < date.size(); i++) {
        if(date[i]==',') date[i] = ' ';
    }

    stringstream func(date);
    string tok;
    while (func >> tok)
    {
        if(tok[0] >= 'A' && tok[0] <= 'Z')
        {
            MON = tok;
        }

        else if (stoi(tok) >= 100)
        {
            YEAR = stoi(tok);
        }
        else if (stoi(tok) < 32)
        {
            DAY = stoi(tok);
        }
    }

}


int processing(int month, int day, int year)
{
    if( year%400==0 || year%4==0 && year%100!=0)
    {
        // before leap day
        if(month < 2) return 1;
        else if(month==2 && day < 29) return 1;

        // on leap day
        else if(month==2 && day==29) return 2;

        // after leap day
        else if(month > 2) return 3;
    }

    // not a leap year
    return 0;
}
