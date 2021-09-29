///generate all possible subset of a set {a ,b ,c}
/// {}  0
// {c}  001
/// {a,b} 110
///and so on
#include<bits/stdc++.h>
using namespace std;

void subset(char arr[],int n){
    //iterate to 2^n
   for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if( i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        } cout<<endl;

   }
}
int main()
{ char arr[3] ={'a','b','c'};
 subset(arr,3);
return 0;
}