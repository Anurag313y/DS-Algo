///problem 1) there are N friends numbered from 0 to n-1,  you have to choose
// 2 person such that are not related to each other....you are given information 
//in form of M pairs(x,y) thewre is link between x and y.... Find out the no of
 //ways in which 2 person from diff group can be choosen.


 #include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
int n,m;
vector<vector<int>> adj;
vector<int> componets;

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

    // for(auto i : componets){
    //     cout<<i<<" ";
    // }

    /////upto this we found our no of elements in each type of connected components....now-

    long long ans =0;
    for(auto i : componets){
      ans+= i*(n-i);
    }

    cout<<(ans/2);
  return 0;
}
