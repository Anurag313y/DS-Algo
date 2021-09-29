////////****************Bellman Ford Algorithm******************///////////////////
// give MST,detect cycle(-ve or +ve)
//// what makes it better than Dijkstra-
// Negative edges!!!
// -------> it will work for -Ve edges and -Ve cycles.
// ------->it can detect -Ve cycle as well(if after n-1 pass if the answer will not 
// change then it means no -Ve cycle but if answer changes
//  after n-1 cycle(ans reduces) , it means it contains -Ve cycle)

#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int n,m;cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int src; cin>>src;


    
    vector<int> dist(n,INF);
    dist[src] = 0;
    for(int iter=0;iter<n-1;iter++){
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v] = min(dist[v],w+dist[u]);
        }
    }

    for(auto i : dist){
        cout<<i<<" ";
    }cout<<"\n";

  return 0;
}


// input:
// 5 8 
// 1 2 3
// 3 2 5
// 1 3 2  
// 3 1 1
// 1 4 2
// 0 2 4 
// 4 3 -3
// 0 1 -1
// 0

// output:
// 0 -1 2 -2 1 