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

class DATE
{
public:
    string month;
    int mon;
    int day;
    int year;
    DATE()
    {
        month = "";
        day = -1;
        year = -1;
    }
    void  setup(string m, int d, int y)
    {
        this->month = m;
        this->day = d;
        this->year = y;

        if(month.compare("January")==0) mon = 1;
        if(month.compare("February")==0) mon = 2;
        if(month.compare("March")==0) mon = 3;
        if(month.compare("April")==0) mon = 4;
        if(month.compare("May")==0) mon = 5;
        if(month.compare("June")==0) mon = 6;
        if(month.compare("July")==0) mon = 7;
        if(month.compare("August")==0) mon = 8;
        if(month.compare("September")==0) mon = 9;
        if(month.compare("October")==0) mon = 10;
        if(month.compare("November")==0) mon = 11;
        if(month.compare("December")==0) mon = 12;
    }

};

int main() {
    /*
     * lightOJ 1414 February 29
     */

    int test; scanf("%d",&test);
    getchar();
    for (int t = 1; t <= test; t++) {
        string  date1, date2;
        getline(cin, date1);
        getline(cin, date2);

        DATE one, two;


        MON=""; DAY=-1; YEAR=-1;
        tokenize(date1);
        one.setup(MON,DAY,YEAR);

        MON=""; DAY=-1; YEAR=-1;
        tokenize(date2);
        two.setup(MON,DAY,YEAR);

        ll leap = 0;
        int res1, res2;
        res1 = processing(one.mon, one.day, one.year);
        res2 = processing(two.mon, two.day, two.year);
        // both same year
        if(one.year == two.year)
        {
            if((res1==1 || res1==2) && (res2==2 || res2==3))
            leap = 1;
        } else if(one.year != two.year)
        {
            if(res1 == 2 || res1 == 1) leap = leap + 1;
            if(res2 == 2 || res2 == 3) leap = leap + 1;
                                    // one.year already included hence leave it
            leap = leap + ( leap_count(two.year-1) - leap_count(one.year) );
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
