// q1) given array , integer K , X ,... find max sum subarray of size k and sum less than X
// Solution :1 brute force(n*k) not good
//  approach 2: sliding window O(N)
#include<bits/stdc++.h>
using namespace std;

void maxsubarraySum(int arr[], int n,int k, int x){
    int sum=0,ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<x)
    {
        ans=sum;
    }
     for(int i=k;i<n;i++){
        sum = sum - arr[i-k];
         sum = sum + arr[i];
         if(sum<x){
             ans= max(ans,sum);
         }
    }
    cout<<ans;
}


int main(){
    int arr[]={7,5,4,6,8,9};
    int k=3, x=20,n=6;
    maxsubarraySum(arr,n,k,x);
    return 0;
}