////print all possible words from phone digits

#include<bits/stdc++.h>
using namespace std;

string keypad[]= {"","", "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keyypd(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypad[ch-'0'];
    string ros = s.substr(1);

    for(int i=0;i<code.size();i++){
        keyypd(ros, ans+code[i]);
    }
}
int main()
{
    keyypd("23","");

  return 0;
}

///didnt understand much