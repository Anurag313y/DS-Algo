///Eluclid algorithm to find GCD
// Example: 
// 24 = 2 x 2 x 2 x 3
// 42 = 2 x 3 x 7

///#####Euclid Algorithm####///////
// GCD(42,24) = GCD(18,24)   {main concept behind Euclid Algorithm}


// 42-24 = 18       .....      42 % 24 = 18
// 24-18=6          .....      24 % 18 = 6
// 18-6= 12                     18 % 6  = 0 (stop)
// 12-6 = 6
// 6-6=0   (ans =6)

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int rem =a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
return 0;
}