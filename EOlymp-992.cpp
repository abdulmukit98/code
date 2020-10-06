//problem description
//https://vjudge.net/problem/EOlymp-992

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

void dfs(int node);
int counter;

class edge{
public:
    int node_a, node_b;

    // constructor
    edge(int a, int b)
    {
        node_a = a;
        node_b = b;
    }

    void setup(int a, int b)
    {
        node_a = a;
        node_b = b;
    }

};

int main() {
    /*
        H - Cities and roads

     */
    vector<edge> vec;
    //vec.push_back(edge(5,3));

    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int val;
            scanf("%d",&val);

            if(val == 1)
            {
                bool present = false;
                for (int k = 0; k < vec.size(); ++k) {
                    if((vec[k].node_a == i || vec[k].node_a == j) && (vec[k].node_b == i || vec[k].node_b == j))
                    {
                        present = true;
                        break;
                    }
                }

                if(present == false)
                    vec.push_back(edge(i, j));
            }
        }
    }

    printf("%d\n",vec.size());

    return 0;
}
