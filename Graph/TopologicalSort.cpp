////// Topological sort - ordering of nodes in directed graph(---->)where
/// each directed node edge from A--->B node A appears before node B in ordering. 

// Topological sort are not UNIQUE and not every graph has Topological sort(cyclic graph) . 
//if graph is directed and if we didnt get topologicalSort then it contain 
// cycle(cycle detection)

#include<bits/stdc++.h>
using namespace std;

int main()
{ // n= no of vertix ,     m = no of edges
  int n,m;
  cin>>n>>m;

  //create adjancy list
  vector<vector<int>> adj(n);
  vector<int> indeg(n,0);

  for(int i=0;i<m;i++){
      int u,v;cin>>u>>v;
      ///u-->v
      adj[u].push_back(v);
      indeg[v]++;
  }

  queue<int> pq;
  for(int i=0;i<n;i++){

     if(indeg[i]==0){
         pq.push(i);
     }
  }
 
  while(!pq.empty()){
   
      int x= pq.front();
      pq.pop();
      cout<<x<<" ";
      //x--->v

      for(auto it : adj[x]){
          indeg[it]--;
          if(indeg[it]==0){
              pq.push(it);
          }
      }
  }

  return 0;
}

///input: 
// 4 3
// 0 1
// 1 2
// 2 3

///output: 
// 0 1 2 3