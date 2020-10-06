#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL
#define pi acos(-1)

void bfs(int node);
vector<int> adjacent[1000];
bool visited[1000];
list<int> que;


int main() {
    /*
        bfs
        can't done recursive

     */
    memset(adjacent, 0, sizeof(adjacent));
    memset(visited, false, sizeof(visited));
    que.clear();

    int vertices, edges;
    printf("Enter vertices and edgs:");
    scanf("%d %d",&vertices, &edges);

    for (int i = 0; i < edges; ++i) {
        printf("Enter a edge b:");

        int a,b;
        scanf("%d %d",&a, &b);

        adjacent[a].push_back(b);
        adjacent[b].push_back(a);

    }

    // starting node 2
    bfs(2);

    return 0;
}

// bfs is not recursive algorithm
void bfs(int node)
{
    /*
    push starting node into que
    and the game begin

                                (front)------------->-----------------|
                            |      |                                 \|/
                            |      |        |                         |
                            |      |        |                         |
                            |               |                         |
                            |               |                         |
                            |               |                         |
                            | ^           ^ |                         |
                            | |  make     | |                         |
                              |  visited  | |       adjacent(front)   |
            starting node-----|           |---------------------------|


    */
    que.push_back(node);
    visited[node] = true;

    while (!que.empty())
    {
        int front = que.front();
        que.pop_front();
        printf("%d ",front);

        for (int i = 0; i < adjacent[front].size(); ++i) {
            int child = adjacent[front][i];
            if(visited[child] != true)
            {
                visited[child] = true;
                que.push_back(child);
            }
        }
        
    }


}
