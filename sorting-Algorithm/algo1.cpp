/////////////////////////////SELECTION SORT/////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n);
void swap(int *a,int *b);
void selection_sort(int arr[],int n)
{ int min_index,i,j;
  for( i=0;i<n-1;i++)
  {     min_index=i;
      for( j=i+1;j<n;j++)
      {
          if(arr[j]<arr[min_index]){min_index=j;}
      }
      swap(&arr[i],&arr[min_index]);
  }
  

}
void swap(int *a,int *b)
{ int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){cin>>arr[i];}                              
 selection_sort(arr,n);
 for(int i=0;i<n;i++){cout<<arr[i]<<" ";} 

}
