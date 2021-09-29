//exponential search- O(log n)
//step-
//1. find range where element present then do binary search
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid= l+(r-l)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
         if(arr[mid]>x)
        {
            return binary_search(arr,l,mid-1,x);
        }
        else
        return binary_search(arr,mid+1,r,x);

    }
    return -1;
}
int exponential_search(int arr[],int n,int x) 
{
   if(arr[0]==x)
   {
       return 0;
   }
   int i=1;
   while(i<n&& arr[i]<=x)
   {
       i*=2;
   }
    return binary_search(arr,i/2,min(i,n-1),x);
}
int main()
{
  int n,x;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){cin>>arr[i];}  
cin>>x;                              
int ans;                             
ans= exponential_search(arr,n,x);
if(ans==-1){cout<<"-1";}
else
 cout<<ans;

}
