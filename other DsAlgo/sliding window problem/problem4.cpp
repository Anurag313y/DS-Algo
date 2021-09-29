// q4) given array ,and integer k ,... chech if any subarray of size k exists in
// an array such that concatination of elements form a palidrome;

// Solution:1 brute force(n^3) not good
//  approach 2: sliding window or two pointer  O(N^2) ,good

// Approach - 
// 1) store concatination of initial k elements
// 2) iterate over array & start deleting elements from start and adding from end
//3) at each step, chech if concatination is palindrome
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
  int temp =n, number=0;
  while(temp>0){
      number = number*10 + temp%10;
      temp= temp/10;
  }

  if(number == n){
      return true;
  }
  return false;
}
int findPalindromicSubarray(vector<int> arr, int k){
    int num =0;
    // checking for 1st subarray
    for(int i=0;i<k;i++){
        num =num*10 + arr[i];
    }

    if(isPalindrome(num)){
        return 0;
    }

     num=0;
     int ptr=1;
     // checking for other subarray upto end
    for(int j=k;j<arr.size();j++){
       num = (num%(int)pow(10,k-1))*10 +arr[j];
    
       if(isPalindrome(num)){
           return j-k+1;
       }
    }
    return -1;
}

int main(){
   vector<int>arr ={2,3,5,1,1,5};
   int k=4;
   int ans = findPalindromicSubarray(arr,k);
   if(ans==-1){
       cout<<"palindromic subarray doesn't exist";
   }
   else{
       for(int i=ans; i<ans+k; i++){
           cout<<arr[i]<<" ";
       }
       cout<<endl;
   }
  
    return 0;
}