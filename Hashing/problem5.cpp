//// Q5) Top K most frequent- element in the stream;
//problem: we have given array , output element in decreasing frequency 
// till we reach (k+1)th distinct element 
// input example: 6 2
//               1 2 2 2 3 1

//       output:2 3
//              1 1

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define pii pair<int,int> 
#define vii  vector<pii> 
int main(){
    int n,k;
    cin>>n>>k;

vi a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
map<int,int>freq;
for(int i=0;i<n;i++){
 int presentSize = freq.size();
 if(freq[a[i]]==0 && presentSize==k){
     break;

 }
 freq[a[i]]++;
}

vii ans;
map<int,int> :: iterator it;
for( it=freq.begin();it!= freq.end();it++){
    if(it->second !=0)
    {
        pii p;
        p.first = it->second;
         p.second = it->first;
         ans.push_back(p);
    }
}
sort(ans.begin(),ans.end(),greater<pii>());

vii :: iterator it1;
 for( it1=ans.begin();it1!= ans.end();it1++){
   cout<<it1->second<<" "<<it1->first<<endl; 
}
    return 0;
}