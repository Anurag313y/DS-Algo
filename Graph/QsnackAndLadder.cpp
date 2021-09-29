///Problem: the game of snack and ladder
// you are at square 1 and have to reach square 100.You have complete controle over
// the dies and get any number from 1-6.
// for given ladders and snake, find the minimum steps to reach.

//input: 
// 2(no of ladder)
// 3 90(aagar 3 me aa gye to 90 me aa jaoge)
// 56 76
// 3(no of snakes)
// 99 10 (aagar 90 me aa gye to 10 me aa jaoge)
// 30 20 
// 20 5

// approach:
// 1.BFS
// 2. push 1 into queue,
//    for all possobility in dies:
//    check if the next position is ladder , snake or empty.
//    mark the square as visited and push into queue.
//    3. stop the traversal , when you reached 100.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ladders,snakes;
    cin>>ladders;
    map<int,int> lad;
    map<int,int> snak;
    for(int i=0;i<ladders;i++){
        int u,v; cin>>u>>v;
        lad[u]= v;
    }
    cin>>snakes;
    for(int i=0;i<snakes;i++){
        int u,v;cin>>u>>v;
        snak[u] = v;
    }



    int moves = 0;
    queue<int> q;
    q.push(1);
    bool found = false;
    vector<int> vis(101,0);
    vis[1]= true;
    while(!q.empty() && !found){
        int sz = q.size();
        while(sz--){
            int t = q.front();
            q.pop();
            for(int die=1;die<=6;die++){

                //100 found!!!
                if(t + die ==100){
                    found = true;
                }

                 ///if ladder found
                if(t +die <=100 && lad[t+die] && !vis[lad[t+die]]){
                    vis[lad[t+die]] = true;
                    if(lad[t+die] ==100){
                        found =true;
                    }
                    q.push(lad[t+die]);
                }
                ////snake found
                else if(t+die <=100 & snak[t+die] && !vis[snak[t+die]]){
                    vis[snak[t+die]] =true;
                    if(snak[t+die]==100)
                    {
                        found = true;
                    }
                    q.push(snak[t+die]);
                }

                ///empty square
                else if(t+die <=100 && !vis[t+die] && !snak[t+die] && !lad[t+die]){
                   vis[t+die] = true;
                   q.push(t+die);

                }
            }
        }
        moves++;
    }
    if(found){
        cout<<moves;
    }
    else{
        cout<<"-1";
    }

  return 0;
}

// input:
// 2
// 3 90
// 56 76
// 3
// 99 10
// 30 20
// 20 5

// output:
// 3