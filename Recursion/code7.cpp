//Find the first and the last occurence of a number in an array
//ex. {4,2,1,2,5,2,7}
///let for "2" first occurence = 1 and last  = 5
#include<bits/stdc++.h>
using namespace std;

/// function for first ocurence
int foccur(int arr[],int n,int x,int i){
    
     if(i==n){
       return -1;
     }
     if(arr[i]==x){
         return i;
     }
     
     foccur(arr, n,x,i+1);
}

// function for last ocurence
int Loccur(int arr[],int n,int x,int i){
 if(i==-1){
       return -1;
     }
     if(arr[i]==x){
         return i;
     }
     
     Loccur(arr, n,x,i-1);
}


int main()
{
    int arr[]={4,2,1,2,5,2,7};
    int size = 7;
    int x =2;
cout<<foccur(arr,size,x,0)<<"\n";
 cout<< Loccur(arr,size,x,size-1);
  return 0;
}