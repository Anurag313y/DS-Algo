/////Adjancy Matrix of Undirected Graph

#include<bits/stdc++.h>
using namespace std;



int main()
{ 
    ///size of matrix (n x m)
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adjm(n+1, vector<int>(n+1,0));

    for(int i=0; i<m;i++){
        int x,y;
        cin>>x>>y;
        adjm[x][y] = 1;
        adjm[y][x] = 1; 
 
    }
cout<<"our adjancy matrix is:"<<endl;

for(int i=1; i<n+1;i++){
        
        for(int j=1; j<n+1;j++){
          cout<<adjm[i][j]<<" ";
     }cout<<endl;
}
  return 0;
}

///input:
// 7 7
// 1 2
// 1 3
// 2 4
// 2 5
// 2 6
// 2 7
// 7 3

// output:
// our adjancy matrix is:
// 0 1 1 0 0 0 0
// 1 0 0 1 1 1 1
// 1 0 0 0 0 0 1
// 0 1 0 0 0 0 0
// 0 1 0 0 0 0 0
// 0 1 0 0 0 0 0
// 0 1 1 0 0 0 0