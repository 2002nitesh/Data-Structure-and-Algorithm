#include<bits/stdc++.h>
using namespace std;
// que ->> counting total number of graph
int main(){
    int node;
    cin>>node;
    int power = (node*(node-1))/2;
    int total_no_of_graph = pow(2,power);
    cout<<total_no_of_graph<<endl;
    return 0;
}