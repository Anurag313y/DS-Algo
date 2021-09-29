// q3) given array ,and integer k ,... chech if any subarray of size k exists in
// an array such that elements in the subarray form a number divisible by 3;


// Solution:1 brute force(n^2) not good
//  approach 2: sliding window or two pointer  O(N) ,good
#include<bits/stdc++.h>
using namespace std;

void computeNumberfromsubarray(vector<int> arr, int k){
   pair<int ,int> ans;
   int sum =0;
   for(int i=0;i<k;i++){
       sum+=arr[i];
   }
   bool found = false;
    if(sum%3==0){
        ans = make_pair(0,k-1);
        found =true;
    }


    for(int j=k;j<arr.size();j++){
      if(found){
          break;
      }
      sum+= arr[j] - arr[j-k];
      if(sum%3==0)
      {
          ans= make_pair(j-k+1,j);
          found = true;
      }
   }
   if(!found){
       ans= make_pair(-1,0);
   }
   if(ans.first == -1)
   {
       cout<<"No such subarray found";
   }
   else{
      for(int i=ans.first; i<=ans.second;i++){
          cout<<arr[i]<<" ";
      }

   }
}


int main(){
    vector<int> arr={84,23,45,12,56,82};
   int k=3;computeNumberfromsubarray(arr,k);
  
    return 0;
}