////No. of ways to do something
// Example : 
// suppose n1 student take = english
//         n2 student take = Hindi
//         n3 student take = both 
// then total student = n1+n2 - n3 (this is inclusion exclusion principle)

//Programming question 1 : How many numbers between 1 and 1000 are divisible by 5 or 7
#include<bits/stdc++.h>
using namespace std;

int divisible(int n , int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}
int main()
{
    int a,b,n;
    cin>>n>>a>>b;
   cout<< divisible(n,a,b);

return 0;
}