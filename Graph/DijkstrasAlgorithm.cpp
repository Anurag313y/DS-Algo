///// Given weighted graph(directed /undirected). Find the single source shortest
//// path from a vertex u to all the vertices in the graph. If the node is unreachable 
///  then print -1.(path lenght = sum of weights in path)
//Note:- weight of edges must be +ve

/////*********Djkastra Algorithm*********///////
//approach:- 
// 1. assign a distance value to all vertices in the input grapph. initilize all 
// distance value as INFINITE. Assign distance value as 0 for the source vertex.
//2. while set is not empty 
//     A. pick a vertex "u" from set "s" that has minimum distance value.
//     B. update distance value of all adjecent vertices of "u".


#include<bits/stdc++.h>
using namespace std;
const int inf = 1e7;
int main()
{
   int n,m;cin>>n>>m;
   vector<int> dist(n+1,inf);
   vector<vector<pair<int,int>>> graph(n+1);

   for(int i=0;i<m;i++){
       int u,v,w;cin>>u>>v>>w;
       graph[u].push_back({v,w});
       graph[v].push_back({u,w});
   }

   int source; cin>>source;
   dist[source] = 0;
   set<pair<int,int>>s;
   //{weight=distance,vertix}
   s.insert({0,source});
   while(!s.empty()){
       auto x= *(s.begin());
       s.erase(x);
       for(auto it : graph[x.second]){
           if(dist[it.first] > (dist[x.second]+it.second)){
               ///updating the distance(first erase then update then insert)
              s.erase({dist[it.first], it.first});
              dist[it.first] = dist[x.second] + it.second;
              s.insert({dist[it.first], it.first});
           }
       }
   }

   for(int i=1;i<=n;i++){
       if(dist[i]<inf){
           cout<<dist[i]<<" ";
       }
       else{
           cout<<"-1"<<" ";
       }
   }
  return 0;
}


// inpute:
// 4 4
// 1 2 24
// 1 4 20
// 3 1 3
// 4 3 12
// 1


// output:
// 0 24 3 15 

