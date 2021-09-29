//BINARY SEARCH (in sorted array )-log(n)



 #include<bits/stdc++.h>
  using namespace std;

int binarySearch(int arr[],int l,int r,int f){int mid;
if(r>=l) {
   mid = l+(r-l)/2;

if(arr[mid]==f){
  return mid;
}
if(arr[mid]>f) return binarySearch(arr,l,mid-1,f);

 return binarySearch(arr,mid+1,r,f);
}
return -1;
}

int main(){

  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  int f;cin>>f;
  int ans= binarySearch(arr,0,n-1,f);
  if(ans==-1) cout<<"-1";

  else{
    cout<<ans;
  }
  return 0;

}
