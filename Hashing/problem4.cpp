//Problem 4: Sliding-Window-Techenique
// Problem- given array, with N elements... find min sum of K 
// consecutive elements.
// input -    8 3
//            -2 10 1 3 2 -1 4 5
// output-    4
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
  int n,k;
  cin>>n>>k;

vi a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int s=0, ans = INT_MAX;
for(int i=0;i<k;i++)
{
    s+=a[i];
}

ans = min(ans,s);

// sliding window
for(int i=1;i<n-k+1;i++)
{
    s-=a[i-1];
     s+=a[i+k-1];
     ans = min(ans,s);
}
cout<<ans<<endl;
    return 0;
}