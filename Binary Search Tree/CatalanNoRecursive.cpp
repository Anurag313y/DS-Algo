/////// Catalan numbers
// Time complexity = exponential ...... recursive method(1)
// Application - 
// 1)possible BST ,  2)Parenthesis/bracket combination, 3)possible forest , 4)ways of triangulation,
// 5)possible path in matrix, 6)divide a circle using Ncords, 7) Dyck words of given length ect.

#include<bits/stdc++.h>
using namespace std;

int catalan(int n){
 
  if(n<=1) return 1; 

  int res=0;
  for( int i=0;i<=n-1; i++)
  {
      res += catalan(i) * catalan(n-i-1);
  }

  return res;
}



int main(){
          for(int i=0;i<10;i++)
          {
              cout<<catalan(i)<<endl;
          }     
    return 0;
}