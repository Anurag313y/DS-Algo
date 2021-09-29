//// factorial of no. using recursion

#include<bits/stdc++.h>
using namespace std;

int facto(int n){
    if(n==0){
        return 1;
    }
   
    int prevfacto = facto(n-1);
    return n*prevfacto; 
}
int main()
{
   int n;
   cin>>n;
   cout<<facto(n);
  return 0;
}