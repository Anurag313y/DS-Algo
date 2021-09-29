// Q1) count frequency of element
// sol. here using map (but you can do it by unordered map .... map->unordered_map)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int ,int>freq;
    for(int i=0;i<n;i++){
      freq[a[i]]++;
    }

    map<int,int> :: iterator it;
    for(it=freq.begin(); it!=freq.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
// input-6
//       1 2 1 3 2 1
// output- 1 3
//         2 2
//         3 1