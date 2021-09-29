//// friends problem 
// no. of ways in which n friends can remain single or can be paired

#include<bits/stdc++.h>
using namespace std;

int paired(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return (paired(n-1) + paired(n-2)*(n-1));
}
int main()
{
 cout<<paired(4); //ans =10
  return 0;
}