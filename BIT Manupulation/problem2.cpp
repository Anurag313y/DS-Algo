///count number of 1 in binary representation
#include<bits/stdc++.h>
using namespace std;
int countSetbit(int n,int cnt){
 
  if(n==0) return cnt;
  n = n&(n-1);
  cnt++;
   countSetbit(n,cnt);
 
}
int main()
{
    int n, cnt=0;;
    cin>>n;
cout<<countSetbit(n,cnt);
return 0;
}