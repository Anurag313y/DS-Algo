                                //   SINGLY LINKED LIST- INSERTION
#include <iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
node*head,*ptr,*temp;
void insertatlast(int x)
{
    node*ptr=new node();
    ptr->data=x;
    ptr->next=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }
    }
    void insertAtanupos(int z)
    {
        int pos;
         cout<<"enter position";
        cin>>pos;
        node*temp=head;
        node*ptr=new node();
        ptr->data=z;
        ptr->next=NULL;
        for(int i=0;i<pos-2;i++)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;

    }
    void print()
    {
       node*temp=head;
       while(temp!=NULL)
       {
           cout<<temp->data<<" ";
           temp=temp->next;
       }
    }
    void insertbeg(int y)
    {
        node*ptr=new node();
        ptr->data=y;
        ptr->next=head;
        head=ptr;
        
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

