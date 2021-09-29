//Q2) question code - RMQSQ - range minimum queries(from spoj)
////example input : 
// 3
// 1 4 1
// 2
// 1 1
// 1 2

// output:
// 4
// 1

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+2, MOD = 1e9+7;
signed main()
{
     int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int len =(int)sqrtl(n)+1;

    //take array b of size len and initilize it with large value MOD
    vector<int> b(len,MOD);

    ////pre computation of blocks
     for(int i=0;i<n;i++){

         // give min value to  each block
       b[i/len] = min(b[i/len], a[i]);
    }


     int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
     
        int ans =MOD;


        for(int i=l;i<=r;){
            if(i%len == 0 && i+len-1 <=r){
                ans = min(ans,b[i/len]);
                i += len;
            }
            else{
                ans = min(ans,a[i]);
                i++;
            }
        }
        cout<<ans;
    }

return 0;
}