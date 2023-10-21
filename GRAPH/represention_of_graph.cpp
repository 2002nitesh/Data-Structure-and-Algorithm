#include<bits/stdc++.h>

using namespace std;
int main(){
    // we can represent a graph by two way
    // 1. Matrix 2. List
    // 1. Adjency Matrix =>> costly things because space complexity is n*n, n =>> numbers of nodes
    int n,m;  // n nodes and m is edges
    cin>>n>>m;
    int adjMat[n+1][n+1];
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    // 2. Adjency list =>> Space complexity is 2*E or numbers of degree
    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // for directed graph
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // u ----->>> v
        adj[u].push_back(v);
    }



    return 0;
}