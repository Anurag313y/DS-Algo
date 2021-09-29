/////Reverse string using recursion 

#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
  if(s.size()==0) return;
  
  string res = s.substr(1);
  reverse(res);
  cout<<s[0];
   
}
int main()
{
    string s;
    cin>>s;
  
reverse(s);

  return 0;
}
