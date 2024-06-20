#include <bits/stdc++.h>
using namespace std;
//        adjacent, weight
vector<pair<int, int>> adjacent[1000];
vector<int> cost(1000, 1e9);
vector<int> parent(1000, -1);
int dijkstra(int src, int dist)
{
    cost[src] = 0;
    // pair <distance from source, nodeId>
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> min_queue;
    min_queue.push({0, src});
    while (!min_queue.empty())
    {
        pair<int, int> p = min_queue.top();
        min_queue.pop();
        int current_node = p.second;
        int distance = p.first;
//        if(distance > cost[current_node]) continue;
        for (auto i : adjacent[current_node]) {
            int next_node = i.first;
            int weight = i.second;
            if(cost[next_node] > cost[current_node] + weight)
            {
                cost[next_node] = cost[current_node] + weight;
                parent[next_node] = current_node;
                min_queue.push({cost[next_node], next_node});
            }
        }
    }
    if(cost[dist] == 1e9)
        return -1;
    return cost[dist];
}

int main()
{
    cout<<"dijkstra"<<endl;
    int n, m; cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin>>u>>v>>w;
        adjacent[u].push_back({v,w});
        adjacent[v].push_back({u,w});
    }

    int ans = dijkstra(1, n);
    if(ans == -1) cout<<ans<<endl;
    else{
        vector<int> v;
        v.push_back(n);
        while (parent[n] != -1)
        {
            v.push_back(parent[n]);
            n = parent[n];
        }
        reverse(v.begin(), v.end());
        cout<<ans<<endl;
        for(auto path:v) cout<<path<<" ";
        cout<<endl;
    }

    return 0;
}
