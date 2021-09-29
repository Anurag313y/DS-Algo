///// Problem2: Merge K-sorted arrays
//Ex. let K=3
//////--------> Let input1 = 1,4,7
//////--------> Let input2 = 3,5
//////--------> Let input3 = 2,6,7
//////--------> output: 1,2,3,4,5,6,7,7
//Solution Approach: 1)create mini heap of pairs { pair-> (value,array no)}
/////////////////////2) insert {1st element.array no.} of all sorted
//  arrays into MinHeap  
///////////////////3) main idea: pop element from MinHeap and store in
//  ans array . insert next element of sorted array into MinHeap 
//// also keep track of indices of element
#include<bits/stdc++.h>
using namespace std;

int main(){
   int k ; 
   cin>>k;
   vector<vector<int>> a(k);
   for(int i=0;i<k;i++)
   {
       int size;
       cin>>size;
       a[i]= vector<int>(size);
       for(int j=0;i<size;j++)
      {
         cin>>a[i][j];       
      }
   }

   vector<int> idx(k,0);

   //creating minHeap
   priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>> pq;
   
    for(int i=0;i<k;i++)
   {
        pair<int ,int>p;
        p.first = a[i][0];
        p.second  = i;
      pq.push(p);
   }

   vector<int> ans;
   while(!pq.empty()){
     pair<int ,int> x = pq.top();
     pq.pop();

     if(idx[x.second]+1 < a[x.second].size()){
          pq.push({ a[x.second][idx[x.second]+1], x.second});

          idx[x.second] += 1;
     }

     for(int i=0;i<ans.size();i++){
         cout<<ans[i]<<endl;
     }
   }
    return 0;
}

//////****************Didnt understand*************/////////////////
