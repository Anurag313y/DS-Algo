/////Minimum No. of Squares
//Q) min no of squares whose sum equal to given number 'n'
//Ex. 26 = 4^2+ 3^2+1^1(3 no's)
//       = 5^2+1^1     (2 no's)  
// ans = 2
// recurrence Relation- 
// f(0)= 0,  f(1)=1, f(2)=2, f(3)=3
//so,,,  f(x) = min(f(x-i*i)+1)

////********using Memorizatio*********
#include<bits/stdc++.h>
using namespace std;
const int N =1e5+2,  MOD= 1e9+7;
////solution with Memorization
int dp[N];
int MinSquare(int n){
    if(n==0 || n==1 ||n==2 || n==3){
        return n; 
    }

    if(dp[n] != MOD){
        return dp[n];
    }
    for(int i=1; i*i<=n;i++){
        dp[n] = min(dp[n], 1+MinSquare(n-i*i));
    }
    return dp[n];
}
int main()
{ 
    for(int i=0;i<N;i++){dp[i]= MOD;}
  int n;cin>>n;
  cout<<MinSquare(n)<<endl;
  return 0;
}

///****Recursive solution*******////
// int MinSquare(int n){
//     if(n==0 || n==1 ||n==2 || n==3){
//         return n; ///base case for recursion
//     }
//     int ans = MOD;
//     for(int i=1; i*i<=n;i++){
//         ans = min(ans, 1+MinSquare(n-i*i));
//     }
//     return ans;
// }