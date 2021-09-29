/////////////////////////////BUBBLE SORT/////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n);
void swap(int *a,int *b);
void bubble_sort(int arr[],int n)
{ int i,j;
  for(i=0;i<n-1;i++)
  {
      for(j=i;j<n-i-1;j++)
      {
        if(arr[j]>arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
      }
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
 bubble_sort(arr,n);
 for(int i=0;i<n;i++){cout<<arr[i]<<" ";} 

}
