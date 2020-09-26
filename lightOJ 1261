#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL

class person
{
public:
    vector<int> pos;
    vector<int> neg;
    /*
     * null constructor
     */
    person()
    {

    }

    bool poscheck(int* sol, int soln)
    {
        for(int i=0; i<pos.size(); i++)
            for(int j=0; j<soln; j++)
                if(pos[i] == sol[j])
                    return true;

        return false;
    }

    bool negcheck(int* inv_sol, int inv_soln)
    {
        for(int i=0; i<neg.size(); i++)
            for(int j=0; j<inv_soln; j++)
                // check absolute value of neg vector to compaare
                if( abs(neg[i]) == inv_sol[j])
                    return true;

        return false;
    }

};

int main() {
    /*
     * lightOJ 1261
     *
     * each person has is own pos and neg wishes
     * we have to check if any of his wish is fulfilled
     *
     */
    int test; scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {

        int num, mobj, kwish;
        scanf("%d %d %d",&num, &mobj, &kwish);

        person data[num];
        int w;
        for(int i=0; i<num; i++)
        {
            for(int j=0; j<kwish; j++)
            {
                scanf("%d",&w);
                if(w>0)
                    data[i].pos.push_back(w);
                else if (w<0)
                    data[i].neg.push_back(w);
            }
        }


        /*
         * solution dataset
         * GIVEN  dataset is for positive value
         * we have t genartae the neg value dataset too
        */
        int soln; scanf("%d",&soln);
        int sol[soln];
        for(int i=0; i<soln; i++)
            scanf("%d",&sol[i]);
        /*
         * generate inverse dataset
         */
        int inv_soln = mobj - soln;
        int inv_sol[inv_soln], d=0;
        for(int i=1; i<=mobj; i++)
        {
            int flag = true;
            for(int j=0; j<soln; j++)
            {
                if(sol[j] == i)
                {
                    flag = false;
                    break;
                }
            }
            if(flag == true)
            {
                inv_sol[d] = i;
                d++;
            }
        }

        /*
         * check if every person(data) fulfill the criteria
         */
        bool check = true;
        for(int i=0; i<num; i++)
        {
            if(data[i].negcheck(inv_sol, inv_soln) == false && data[i].poscheck(sol, soln) == false)
            {
                check = false;
                break;
            }
        }

        if(check == true)
            printf("Case %d: Yes\n",t);
        else printf("Case %d: No\n",t);

    }


    return 0;
}


