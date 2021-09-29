///Tiling problem 
// given 2xn board and tile of size 2x1 (count no of ways of tiling )

#include<bits/stdc++.h>
using namespace std;

int tileways(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return tileways( n-1) + tileways(n-2);
}
int main()
{
  cout<<tileways(4); ///ans=3
  return 0;
}