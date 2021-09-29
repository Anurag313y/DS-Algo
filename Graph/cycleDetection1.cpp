/////Cycle Detection in undirected graph

#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &visited,int parent){

   visited[src] =true;
   for( auto i : adj[src]){
       if(i!=parent){
           ///this will return if vertix is visited
           if(visited[i]) return true;
///         if vertix is not  visited 
           if(!visited[i] && iscycle(i,adj,visited,src)){
               return true;
           }
       }

    

   }

   return false;
}
int main()
{
    int n , m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    bool cycle = false;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){

        if(!visited[i] && iscycle(i,adj,visited,-1)){
            cycle = true;
        }
    }
    
    if(cycle){
        cout<<"Cycle is present\n";
    }
    else{
         cout<<"Cycle is not present\n";
    }



  return 0;
}


// input:
// 4 3
// 0 1
// 1 2
// 2 0

// output:
// Cycle is present