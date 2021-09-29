//// check if an array is sorted or  not(*strictly incrasing)

#include<bits/stdc++.h>
using namespace std;

 bool isSorted(int arr[], int n){
      if(n==1) return true;

      bool restarray = isSorted(arr+1, n-1);
      return (arr[0]<arr[1] && restarray);
     
 }
int main()
{
 int arr[] = { 1,2,3,4,5,6,7,8,9};
 int n= 9;
 if(isSorted(arr, n)){
      cout<<"sorted";
 }else{
      cout<<"not sorted";
 }
  return 0;
}