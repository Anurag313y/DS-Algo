// Spanning Tree - given an undirected and connected graph G(V,E) , a spanning tree of graph G is a tree
// that spans G (that is, it includes every vertex of G) and is a subgraph of G(every edge in the tree
//  belongs to G)

// cost of spanning tree=  sum of weight of all the edges of tree
// there may be many spanning tree of a single graph

// Minimum Spanning Tree - it is a spanning tree where the cost is minimum among all the spanning tree.
// there may be many Minimum spanning tree of a single graph.

///**********Kruskal's Algorithm*******************/////////////////to get MST
// 1. sort the edges in increasing order of their weight
//2. iterate the sorted edge- 
//         if (inclusion of i'th edge leads to a cycle) {then skip this edge } 
//         else{include the edge in MST}
// Time complexity = O(E log V )
//  space complexity = O(E+V )

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+6;
vector<int> parent(N);
vector<int> sz(N);


void make_set(int v){
    parent[v] = v;
    sz[v] = 1;
}
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    
    //path compression
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a,int b){
    a = find_set(a);
     b = find_set(b);
     if(a!=b){
         if(sz[a]<sz[b]){
            swap(a,b);
         }

         parent[b]=a;
         sz[a]+= sz[b];
     }
}
int main()
{
   for(int i=0;i<N; i++){
       make_set(i);
   }

   int n,m;cin>>n>>m;
   vector<vector<int>> edges;

    for(int i=0;i<m; i++){
       int u,v,w;cin>>u>>v>>w;
       edges.push_back({w,u,v});
   }

   sort(edges.begin(),edges.end());
   int cost =0;
   for(auto i : edges){
       int w = i[0];
       int u = i[1];
       int v = i[2];
       int x = find_set(u);
       int y = find_set(v);
       

       if(x==y){
          continue;
       }
       else{
           cout<<u<<" "<<v<<"\n";
           cost+=w;
           union_sets(u,v);
       }
   }
   cout<<cost;
  
  return 0;
}

// input:
// 8 9
// 1 2 5
// 2 3 6
// 4 3 2
// 1 4 9
// 3 5 5
// 5 6 10 
// 6 7 7
// 7 8 1
// 8 5 1

// output:
// 7 8
// 8 5
// 4 3
// 1 2
// 3 5
// 2 3
// 6 7
// 27
