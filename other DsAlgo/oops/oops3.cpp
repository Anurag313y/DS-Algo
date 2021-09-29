// function overloading//////////////
#include<bits/stdc++.h>
using namespace std;

class building {

    public :

    void fun()
    {
        cout<<"this building is empty\n";
    }
     void fun( int x)
    {
        cout<<"no of rooms:"<<x<<"\n";
    }
     void fun( string s)
    {
        cout<<"this building is:"<<s;
    }
};



int main()
{
   building b;
   b.fun();
    b.fun(6);
     b.fun("dirty");
return 0;
}