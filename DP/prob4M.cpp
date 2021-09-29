////Longest increasing Subsequence 
//Q) you are given an array . Find the length of longest increasing subsequence.
///////######Memorization######
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int dp[N];
int lis( vector<int> &a , int n){
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=1; //single element is also an lis
    for(int i=0;i<n;i++){
     if(a[n]> a[i]){
         dp[n]= max(dp[n], 1+lis(a,i));
     }
  }
  return dp[n];
}
int main()
{
  int n;cin>>n;
  for(int i=0;i<N;i++){
      dp[i] = -1;
  }

  vector<int> a(n);
  for(int i=0;i<n;i++){
      cin>>a[i];
  }

  cout<<lis(a,n-1);
  return 0;
}

// input:
// 9
// 10 22 9 33 21 50 52 60 80
// output:
// 7