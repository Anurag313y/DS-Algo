                            // QUEUE USING LINKED LIST
#include<iostream>
using namespace std;
struct node{
int data;
node*link;
};
node*front=NULL;
node*rear=NULL;
bool isempty()
{
    if(front==NULL && rear==NULL)
    return true;
    else
    return false;
}
void enqueue(int value)
{
    node*ptr=new node();
    ptr->data=value;
    ptr->link=NULL;
if(front==NULL)
{
    front=ptr;
    rear=ptr;
}
else
{
    rear->link=ptr;
    rear=ptr;
}
}
 void dequeue()
 {
     if(isempty())
     cout<<"Queue is empty\n";
     else
     if(front==rear)
     {
         free(front);
         front=rear=NULL;
     }
     else
     {
         node*ptr=front;
         front=front->link;
         free(ptr);
     }
 }
 void showfront()
 {
     if(isempty())
     cout<<"Queue is empty\n";
     else
     cout<<"element at front is:"<<front->data;
 }
 void displayQueue()
 {
     if(isempty())
     cout<<"Queue is empty\n";
     else
     {
         node*ptr=front;
         while(ptr!=NULL)
         {
             cout<<ptr->data<<"  "<<endl;
             ptr=ptr->link;
         }
     }
 }
int main()
{
   int choice,flag=1,value;
   while(flag==1)
   {
       cout<<"1.enqueue  2.deque  3.showfront  4.displayQueue  5.Exit\n";
       cin>>choice;
       switch(choice)
       {
           case 1: cout<<"Enter value\n";
           cin>>value;
           enqueue(value);
           break;

           case 2: dequeue();
           break;

           case 3: showfront();
           break;

           case 4: displayQueue();
           break;

           case 5: flag=0;
           break;
       }
   }






    return 0;
}