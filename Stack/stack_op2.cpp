                        // STACK:USING LINKED LIST
#include<iostream>
using namespace std;
struct node{
int data;
node*next;
};
node*top=NULL;
void push(int val){
    node*ptr=new node();
    ptr->data=val;
    ptr->next=top;
    top=ptr;
    
}
void pop(){
    if(top==NULL)
    cout<<"Stack Underflow"<<endl;
    else
    cout<<"the popped element is"<<top->data<<endl;
    top=top->next;
}
void display()
{
    node*temp;
    if(top==NULL)
    cout<<"Stack is Empty"<<endl;
    else{
    temp=top;
    cout<<"Stack elements are:";
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
  cout<<endl;


}





int main()
{ int ch,val;
cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
do{
     cout<<"Enter your choice"<<endl;
     cin>>ch;
     switch(ch){
         case 1: cout<<"Enter value to be pushed";
         cin>>val;
         push(val);
         break;

         case 2: pop();
         break;

         case 3: display();
         break;

         case 4: cout<<"Exit"<<endl;
         break;
         
         default: cout<<"Invalid choice"<<endl;
               }
}while(ch!=4);
    return 0;
}