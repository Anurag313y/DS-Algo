/////////////Bipatite Graph

#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
vector<vector<int>> adj;
//store colour
vector<int>col;
bool bipart;

/// curr = current colour
 void color( int u , int curr){
     if(col[u] != -1 && col[u] != curr){
         bipart = false;
         return;
     }

     col[u] = curr;
     if(vis[u]){
         return;
     }
     vis[u] = true;

     ///check for neighbours
     for(auto i : adj[u]){
         ///this will convert 1-->0 ans 0--->1(toggle)
         /// 0 xor 1 = 1       ////// 1 xor 1 = 0
         color(i,curr xor 1);
     }

 }
int main()
{ int n,m;
bipart = true;
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n,false);
    col = vector<int> (n,-1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
         adj[v].push_back(u);

    }

    //traverse the graph 
     for(int i=0;i<n;i++){
        if(!vis[i]){

            // i ko 0 se colour kr denge (initially we have choice let 0 = red )
            color(i,0);
        }
    }
if(bipart){
    cout<<"Graph is bipart\n";
}
else{
    cout<<"Graph is not bipart\n";
}
    
    
  return 0;
}



// input:
// 3 3
// 0 1
// 1 2
// 2 0
// output:
// Graph is not bipart