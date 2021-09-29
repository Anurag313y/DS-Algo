////Nth Fibonacci Number(Memorization)
///  Time complexity(with recursion) -  O(2^N) 
//   Time complexity(with DP) -  O(N)
// without DP it works for small input but for large input like N=1000 it give TLE

///*****************************************************************************//
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
//////Memorization for DP(Top to down approach)
int dp[N];
int fib(int n){
    if(n==0 || n==1) return n;  //// base case
    
    if(dp[n] != -1) return dp[n];
    dp[n]= fib(n-1)+fib(n-2);
    return  dp[n];
    
}
int main()
{
    int n;cin>>n;

    //initilization of DP table
    for(int i=0;i<N;i++)
    {
      dp[i]= -1 ;
    }
    cout<<fib(n-1);

  return 0;
}