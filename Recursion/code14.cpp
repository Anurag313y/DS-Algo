////generate substring with ASCII number

#include<bits/stdc++.h>
using namespace std;

void subsequence(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    subsequence(ros,ans);
    subsequence(ros,ans+ch);
    subsequence(ros,ans+ to_string(code));
}
int main()
{
  subsequence("AB", "");
  return 0;
}

///didnt understand much