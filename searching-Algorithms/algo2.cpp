// jump search(in sorted array)
//JUMP SEARCH(USE STEP SIZE(m)=SQRT(n))
 //O(n/m +(m-1))
// linear search>jump search>binary search
#include<bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[],int n,int x) 
{
    int left=0;
    int right=sqrt(n);
    //not in right block
    while(arr[right]<=x&&right<=n)
    { 
        left=right;
        right+=sqrt(n);
        if(right>n-1){right=n;}
    }

    // we are in ryt block
    for(int i=left;i<right;i++)
    {
        if(arr[i]==x){return i;}
    }
    return -1;
}
int main()
{
  int n,x;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){cin>>arr[i];}  
cin>>x;                              
int ans;                             
ans= jumpSearch(arr,n,x);
if(ans==-1){cout<<"-1";}
else
 cout<<ans;

}
