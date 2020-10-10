#include <bits/stdc++.h>
using namespace std;
#define null NULL
#define ll long long
#define pi acos(-1)


class node{
public:
    int parent;
    int distance;
    bool completed;

    node()
    {
        this->distance = INT_MAX;
        this->parent = -1;
        this->completed = false;        // completed = true mean
    }                                   // this node been added to shorted path tree

    //        node   weight
    vector<pair<int, int>> adjacent;
};

vector<node> G;
void Relax(int u, int v, int w);
int Extract_min();

int main() {
    /*
        dijkstra

        Initialize-Single-Source(G, s)
        {
            for each vartex v -> G.V
                v.distance = infinity
                v.parent = NIL = -1
            s.distance = 0                  // only source parent 0 others null
        }

        Relax(u, v, w)
        {
            if v.distance > u.distance + w(u,v)
                v.distance = u.distance + w(u,v)
                v.parent = u
        }

        Dijkstra(G, w, s)
        {
            Initialize-Single-Source(G, s)
            S = NIL                                 // shorted path tree null
            Q = G.V                                 // min priority queue Q
            while Q != empty                        // keyed by vertex.distance value
                u = Extract-Min(Q)
                S = S (UNION) u                     // shorted path tree
                for each vertex v --> adjacent(u)
                    Relax(u, v, w)
        }

    */

    printf("Dijkstra\nEnter vertex and edges number: ");
    int vartex, edges;
    scanf("%d %d",&vartex, &edges);

    // Initialize-single-source
    for (int i = 0; i < vartex; ++i) {
        G.push_back(node());
    }

    for (int i = 0; i < edges; ++i) {
        printf("Enter edge A, B, W: ");
        int a, b, w;        // two node and their weight
        scanf("%d %d %d",&a, &b, &w);

        G[a].adjacent.push_back({b, w});
        G[b].adjacent.push_back({a, w});
    }

    printf("Enter source node: ");
    int src; scanf("%d",&src);
    G[src].distance = 0;


    while (true)
    {
        int u = Extract_min();
        if (u == -1) break;

        G[u].completed = true;
        for (int i = 0; i < G[u].adjacent.size(); ++i) {
            int v = G[u].adjacent[i].first;               // pair<b, weight>
            int w = G[u].adjacent[i].second;
            Relax(u, v, w);
        }
    }

    for (int i = 0; i < G.size(); ++i) {
        printf("node: %d \tparent: %d \tdistance: %d\n", i, G[i].parent, G[i].distance);
    }

    return 0;
}


/*
 * here u-node belong to shorted path tree
 * it has the lowest possible distance from source
 * we will enlighten all his adjacent vartex v through him

    Relax(u, v, w)
    {
        if v.distance > u.distance + w(u,v)
        v.distance = u.distance + w(u,v)
        v.parent = u
    }
*/
void Relax(int u, int v, int w)
{
    if (G[v].distance > G[u].distance + w)          // u-node already sorted
    {
        G[v].distance = G[u].distance + w;
        G[v].parent = u;
    }
}


// min priority queue keyed by vartex.distance value
int Extract_min()
{
    int min = INT_MAX;
    int index;
    for (int i = 0; i < G.size(); ++i) {
        if (G[i].completed == false && G[i].distance < min)
        {
            index = i;
            min = G[i].distance;
        }
    }

    // all node has been processed
    if (min == INT_MAX)
        index = -1;

    /*
        if index == -1
        min priority queue empty
        terminate dijkstra
    */
     return index;
}



