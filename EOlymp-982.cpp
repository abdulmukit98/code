//problem description
//https://vjudge.net/problem/EOlymp-982

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

void dfs(int node);
vector<int> adjacent[107];
bool visited[107];
int counter;


int main() {
    /*
        EOlymp-982 connectivity

     */
    counter = 0;
    memset(adjacent, 0, sizeof(adjacent));
    memset(visited, false, sizeof(visited));

    // n vertices, m edges
    int n, m, root;
    scanf("%d %d",&n, &m);

    for (int i = 0; i < m; ++i) {
        int a, b;
        scanf("%d %d",&a, &b);
        root = a;

        adjacent[a].push_back(b);
        adjacent[b].push_back(a);
    }


    // if connected any node may be root
    dfs(root);

    if(counter == n)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}

void dfs(int node)
{
    if(visited[node] == true)
        return;

    // not visited
    visited[node] = true;
    counter = counter + 1;

    while (!adjacent[node].empty())
    {
        /// adjacent is an array
        int child = adjacent[node].back();
        adjacent[node].pop_back();

        dfs(child);
    }
}
