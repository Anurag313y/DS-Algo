//RunTime Polymorphism using- Virtual Keyword//////////////
#include<bits/stdc++.h>
using namespace std;

class base {
 public :
virtual void print(){
     cout<<"base class print function\n";
 }
 void display(){
     cout<<"base class display function\n";
 }
};


class derived : public base {
 public :
 void print(){
     cout<<"derived class print function\n";
 }
 void display(){
     cout<<"derived class display function\n";
 }
};

int main()
{ 
    base *baseptr;   /*creating base class pointer */
    derived d;        /*creating derived class object */ 
    baseptr = &d;  /* put addredd of derived class in baseptr */
    baseptr->print();
     baseptr->display();

return 0;
}