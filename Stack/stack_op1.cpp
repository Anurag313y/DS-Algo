                            // STACK USING ARRAYS
                            
#include<iostream>
#define SIZE 5
using namespace std;
class stack{
    private:
    int num[SIZE];
    int top;
  public:
   stack();
   int push(int);
   int pop();
   int isEmpty();
   int isFull();
   void displayItems();
};

stack::stack(){
    top=-1;
}
int stack::isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;
}
int stack::isFull(){
    if(top==SIZE-1)
    return 1;
    else
    return 0;
}
int stack::push(int n){
    if(isFull()){return 0;}
    ++top;
    num[top]=n;
    return n;
}
int stack::pop(){
   int temp;
   if(isEmpty())
       return 0;
       temp=num[top];
       --top;
       return temp;
   
}
void stack::displayItems(){
   int i;
   cout<<"stack is:";
   for(i=(top);i>=0;i--)
   {
       cout<<num[i]<<"  ";
       cout<<endl;
   }
}

int main()
{ stack stk;
int choice,n,temp;
do{ cout<<endl;
cout<<"0-exit"<<endl<<"1-push"<<endl<<"2-pop"<<endl<<"3-display"<<endl<<endl<<"enter your choice:"<<endl;
cin>>choice;
switch(choice){
    case 0: break;

    case 1: cout<<"enter item to insert";
    cin>>n;
    temp=stk.push(n);
    if(temp==0)
    cout<<"stack is full."<<endl;
    else
    cout<<temp<<"is inserted."<<endl;
    break;

    case 2: temp=stk.pop();
    if(temp==0)
    cout<<"stack is empty"<<endl;
    else
    cout<<temp<<"is removed."<<endl;
    break;

    case 3: stk.displayItems();
    break;

    default: cout<<"Invalid choice"<<endl;

}
}while(choice!=0);
    return 0;
}
