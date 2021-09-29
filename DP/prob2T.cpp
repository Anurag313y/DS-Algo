/////Minimum No. of Squares
//Q) min no of squares whose sum equal to given number 'n'
//Ex. 26 = 4^2+ 3^2+1^1(3 no's)
//       = 5^2+1^1     (2 no's)  
// ans = 2
// recurrence Relation- 
// f(0)= 0,  f(1)=1, f(2)=2, f(3)=3
//so,,,  f(x) = min(f(x-i*i)+1)

////********using Tabulation*********
#include<bits/stdc++.h>
using namespace std;
const int N =1e5+2,  MOD= 1e9+7;

int main()
{ 
   
  int n;cin>>n;
  vector<int> dp(n+1,MOD);
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  dp[3]= 3;
 for(int i=1;i*i<=n;i++)
 {
      for(int j=0;i*i+j <= n ; j++ )
     {
          dp[i*i+ j] = min(dp[i*i +j], 1+dp[j]);
   
     }

 }
  cout<<dp[n]<<endl;
  return 0;
}

