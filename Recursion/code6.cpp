///// print numbers till N

#include<bits/stdc++.h>
using namespace std;

/////function to print in decreasing order 
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
    
}

/////function to print in increasing order 
void incr(int n){
  if(n==1){
    cout<<"1"<<" ";
    return;
  }
   incr(n-1);
   cout<<n<<" ";
   return;
}
int main()
{ 
    int n;
    cin>>n;
dec(n); 
cout<<"\n";
 
incr(n);
  return 0;
}