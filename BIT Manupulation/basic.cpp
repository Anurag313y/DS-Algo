/////Bit-operations
#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    int mask = 1<<pos;
    if(n&mask) return 1;
    return 0;
}

int setBit(int n, int pos){
    ///0-->1
    int mask = 1<<pos;
    n = n|mask;
    return n;
}

int oddEven(int n){
    if(n&1)  cout<<"odd"; 
    else  cout<<"even";
    return 0;
}

int clearBit(int n ,int i){
///// 1--->0
int mask = ~(1<<i);
return (n&mask);
}

int updateBit(int n , int pos,int val){
    //clearbit+setbit
    int mask = ~(1<<pos);
    n = n&mask;
    return (n|val<<pos);
}

int main()
{ 
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    oddEven(7);cout<<endl;
    cout<<clearBit(5,0)<<endl;
    cout<<updateBit(5,1,1)<<endl;
return 0; 
}