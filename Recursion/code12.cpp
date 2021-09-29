////Move all x to end of string

#include<bits/stdc++.h>
using namespace std;
string moveX(string s){
   if(s.size()==0)
   {
       return "";
   }
   char ch = s[0];
   string ans = moveX(s.substr(1));


  if(ch=='x'){
      return ans+ch;
  }
  else{
      return ch+ans;
  }
}
int main()
{ 
    string s;cin>>s;
    cout<<moveX(s);

  return 0;
}