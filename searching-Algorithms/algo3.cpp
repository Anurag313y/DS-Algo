//interpolation search(in sorted array)
  //improvement in binary search
  //conditions-
  //1)array is sorted       (2)uniformaly distributed
  //pos= low + ((x-arr[low])*(high-low))/(arr[high]-arr[low])
  //if sorted and uniform-O(1)
#include<bits/stdc++.h>
using namespace std;
int interpolation_search(int arr[],int n,int x) 
{      int low=0,high=(n-1);
   while(low<=high&&x>=arr[low]&&x<=arr[high])
   {
       if(low==high)
       {
           if(arr[low]==x) return low;
            return -1;
       }
       int pos= low+(((double)(high-low)/(arr[high]-arr[low])*(x-arr[low])));
       if(arr[pos]==x)
       return pos;
       if(arr[pos]<x)
       low=pos+1;
       else
       high=pos-1;
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
ans= interpolation_search(arr,n,x);
if(ans==-1){cout<<"-1";}
else
 cout<<ans;

}
