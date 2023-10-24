#include <bits/stdc++.h>
using namespace std;

void dfsOfGraph(int node, vector<int> adj[], int vis[], vector<int> &dfs)
{
    vis[node] = 1;
    dfs.push_back(node);
    // traverse all its neighbours
    for (auto it : adj[node])
    {
        // if the neighbour is not visited
        if (!vis[it])
        {
            dfsOfGraph(it, adj, vis, dfs);
        }
    }
}

int main()
{

    return 0;
}