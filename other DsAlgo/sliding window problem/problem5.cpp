// q5) given array ,and integer k ,...find the max perfect
//  numbers in a subarray of size K;


////*******Perfect Number - it is a number if it is equal**********
//  to the sum of its proper divisors(positive divisors)except 
// for the number itself ******************* 
// Example (6) = 1,2,3;

// Solution:1 brute force(n*K) not good
//  approach 2: sliding window or two pointer  O(n* sqrt(n)) ,good

// Approach - 
// convert given array into binary array with value 0, 1 only;
//1) initialize a variable to store sum of divisers;
//2) traverse every number less than arr[i] and add it to sum
//  if it is a divisor of arr[i]
///3) if sum of all the divisers is equal to arr[i], then 
// only the number is perfect number;

#include<bits/stdc++.h>
using namespace std;


int maxSum(int arr[],int n,int k){
    if(n<k){
        cout<<"invalid values"<<endl;
        return -1;
    }
     
     // sliding window applied here
    int res=0;
    for(int i=0;i<k;i++){
        res+= arr[i];
    }
    int sum = res;
     for(int i=k;i<n;i++){
      sum+= arr[i] - arr[i-k];
      res = max(res,sum);
    }
    return res;
}
bool isNumberPerfect(int n){
    int sum=1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            if(i== n/i){
                sum+=i;
            }else{
                sum+=i+n/i;
            }
        }
    }

    if(sum== n && n!=1){
        return true;
    }
    return false;
}
int maxNoofperfects(int arr[], int n,int k){

    for(int i=0;i<n;i++){
        if(isNumberPerfect(arr[i])){
            arr[i] = 1;
        }else{
            arr[i]= 0;
        }
    }
    return maxSum(arr,n,k);
}

int main(){
 
 int arr[]={28,2,3,6,496,99,8128,24};
 int k=4,n=8;
 cout<<maxNoofperfects(arr,n,k);

  
    return 0;
}