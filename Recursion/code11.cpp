/////Remove all dupliate from string

#include<bits/stdc++.h>
using namespace std;

string noDuplicate(string s){

if(s.size()==0) return "";
   char ch = s[0];
   string ans = noDuplicate(s.substr(1));
   if(ch==ans[0]){
       return ans;
   }
   return (ch+ans);
}
int main()
{ 
    string s;
    cin>>s;
 cout<< noDuplicate(s);

  return 0;
}