// q2) given array , X ,... find min subarray size for which sum > X
// Solution :1 brute force(n^2) not good
//  approach 2: sliding window O(N)
#include<bits/stdc++.h>
using namespace std;

int smallestSubarrayWithSum(int arr[], int n, int x){
   int sum=0, minLength= n+1, start=0,end=0;
   while(end<n){
       while(sum<=x && end<n){
           sum+=arr[end++];
       }
       while(sum>x && start <n){
        if(end - start < minLength){
            minLength = end - start;
        }
        sum-= arr[start++];

       }
   }
   return minLength;
}


int main(){
    int arr[]={1,4,45,6,10,19};
    int x= 51,n=6;
  int minLength= smallestSubarrayWithSum(arr,n,x);
  if(minLength== n+1){
      cout<<"no such subarray exists";
  }else{
      cout<<"smallest length subarray is:"<<minLength;
  }
    
    return 0;
}