//// Graph: connected Components(use DFS)

#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
int n,m;
vector<vector<int>> adj;
vector<int> componets;

//return no. of component in connected subgraph
int get_comp(int idx){
     if(vis[idx]){
         return 0;
     }

     vis[idx] = true;
     int ans =1;
     for(auto i : adj[idx]){
         if(!vis[i]){
             ans+= get_comp(i);
             vis[i] = true;
         }
     }
     return ans;
}
int main()
{ 
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
         adj[v].push_back(u);

    }
     for(int i=0;i<n;i++){
        if(!vis[i]){
            componets.push_back(get_comp(i));
        }
    }

    for(auto i : componets){
        cout<<i<<" ";
    }
  return 0;
}


// input:
// 5 3
// 0 1
// 2 3
// 0 4
// output:
// 3 2 