#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

vector<int> adjacent[1000];
bool visited[1000];
void dfs(int node);

int main() {
    /*
        dfs
        recursively visit from root node to its child.
        if child visited, return to parent
        find another child from adjacency stack

        used to check if a graph is connected
        or to find a node in a graph
        time complexity O(V+E)
        dfs is faster than bfs
    */

    memset(visited , false, sizeof(visited));

    int vertices, edges;
    printf("Enter vertices and edges:");
    scanf("%d %d",&vertices, &edges);


    for (int i = 0; i < edges; i++) {
        printf("Enter edges between a and b node:");
        int a, b;
        scanf("%d %d",&a, &b);

        adjacent[a].push_back(b);
        adjacent[b].push_back(a);
    }
    dfs(0);

    return 0;
}


void dfs(int node)
{
    if (visited[node] == true)
        return;

    // not visited
    visited[node] = true;
    printf("%d ",node);

    while (!adjacent[node].empty())
    {
        int child = adjacent[node].back();      // stack property
        adjacent[node].pop_back();
        // go from deep to deeper and check if child visited
        dfs(child);
    }

}
