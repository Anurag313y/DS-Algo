// count no. of path possible from start to end point in gameboard
// start point s=0   end point e = 3  we can use dice
#include<bits/stdc++.h>
using namespace std;

int countPath(int s,int e){

    if(s==e) return 1;
    if(s>e) return 0;
    int count =0;
    for(int i=1;i<=6;i++){
       count+= countPath(s+i,e);
    }  

   return count;
}
int main()
{  
    cout<<countPath(0,3); ////ans=4

  return 0;
}