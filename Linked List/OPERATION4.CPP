                // DOUBLY LINKED LIST -INSERTION
#include <iostream>
using namespace std;
struct node
{
    int data;
    node*next;
    node*prev;
};
node*head,*ptr,*tail;
void insertatlast(int x)
{  node*ptr=new node();
    ptr->data=x;
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL)
    {
        head=tail=ptr;
    }
    else
    {  tail=head;
       while(tail->next!=NULL)
       {
           tail=tail->next;
       }
        tail->next=ptr;
        ptr->prev=tail;
        tail=ptr;
    }
}
    void insertAtanupos(int z)
    {  node*ptr=new node();
    ptr->data=z;
    ptr->prev=NULL;
    ptr->next=NULL;
    tail=head;
    int pos;
    cout<<"enter position\n";
    cin>>pos;
    int i=1;
    while(i<pos-1)
    {
        tail=tail->next;
        i++;
    }
    
        ptr->prev=tail;
        ptr->next=tail->next;
        ptr->next->prev=ptr;
        tail->next=ptr;
    }
    void print()
    {
      tail=head;
      while(tail!=NULL)
      {
          cout<<tail->data<<"  ";
          tail=tail->next;
      }
    }
    void insertbeg(int y)
    { node*ptr=new node();
    ptr->data=y;
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
    }
 }
int main()
{ char ch;
  int x,y,z;
 head=NULL;
 while(1)
 {
     cout<<"enter your choice\n 1.insertbeginning 2.insertatLast 3.insertatAnupos 4.print 5.end\n";
     cin>>ch;
   if(ch=='1')
   { cout<<"enter values\n";
      cin>>y;
      insertbeg(y);
   }
   if(ch=='2')
   { cout<<"enter input data";
       cin>>x;
     insertatlast(x);
   }
   if(ch=='3')
   {  
       cout<<"enter values\n";
      cin>>z;
      insertAtanupos(z);
   }
    if(ch=='4')
   {
       print();
   }
 }
    return 0;
}

