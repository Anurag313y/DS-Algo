//problem 3: Number of subarray with sum 0(Hashing)
// input = 1 -1 1 -1


//////output= 4 
                
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 

int main(){

 int n;cin>>n;
  vi a(n);
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }


   map<int,int> cnt;

   int preSum =0;
   for(int i=0;i<n;i++)
  {
     preSum+=a[i];
     cnt[preSum]++;
  } 
  int ans =0;
  map<int ,int> :: iterator it;
 for(it= cnt.begin(); it!=cnt.end();it++){
          
          int c= it->second;
          ans+= (c*(c-1))/2;
                   if(it->first == 0){
                       ans+= it->second;
                   }
     }
    

    cout<<ans<<endl;
    return 0;
}


