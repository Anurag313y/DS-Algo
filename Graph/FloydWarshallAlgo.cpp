/////////////////**********Floyd Warshall Algorithm************/////////////////////////
//----->to find all pair of shortest paths.(directed or undirected)
// i.e. for every u,v in graph G , find the shortest path from u to v.

#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main()
{
     vector<vector<int>> graph= {     {0,5,INF,10},
                                      {INF,0,3,INF},
                                      {INF,INF,0,1},
                                      {INF,INF,INF,0}
                                };

    int n = graph.size();
    vector<vector<int>> dist = graph;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
              
              ////we have given 2 points i,j Now we put other random point(vertix) k
                    //       (k) other point
                    //       / \
                    //      /   \
                    //   (i)-----(j)             initial node point

                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j]= dist[i][k] + dist[k][j];
                }
            }
        }
    }
cout<<"Normalized graph is:\n";
    for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
                if(dist[i][j]==INF){
                    cout<<"INF";
                }
                else{
                    cout<<dist[i][j]<<" ";
                }
               
           } cout<<"\n";
    }

  return 0;
}