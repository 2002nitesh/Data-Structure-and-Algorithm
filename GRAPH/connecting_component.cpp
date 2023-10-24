#include<bits/stdc++.h>
using namespace std;
// how to traverse a graph if graph has connecting conponents
void traverse(int i){
    // traverse by any technique
    // bfs or dfs
}
int main(){
    int visited[11] = {0};
    for(int i=1;i<=10;i++){
        if(!visited[i]){
            traverse(i);
        }
    }
    return 0;
}