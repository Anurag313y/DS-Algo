                    //   DOUBLY LINKED LIST -DELETION
#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
    node*prev;
};
node*head,*ptr,*tail,*pre;
void create(int x)
{ node*ptr=new node();
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
void print()
{
  node*ptr=head;
  while(ptr!=NULL)
  {
     cout<<ptr->data<<"  ";
     ptr=ptr->next;
  }
}
void deletebeg()
{
 tail=head;
 if(head==NULL)
 {
     cout<<"empty\n";
 }
 else
 {
     head=head->next;
     head->prev=NULL;
     tail->next=NULL;
     free(tail);
 }
}
void deleteend()
{
  tail=head;
  if(head==NULL)
  {
      cout<<"empty";
  }
  else
  {
      while(tail->next!=NULL)
      {
          tail=tail->next;
      }
      tail->prev->next=NULL;
      free(tail);
  }
  
}
void deleteanypos(int pos)
{
  tail=head;
  if(head==NULL)
  {
      cout<<"empty";
  }
  else
  {
      int i=1;
      for(i=1;i<pos;i++)
      {
          tail=tail->next;
      }
      tail->prev->next=tail->next;
      tail->next->prev=tail->prev;
      free(tail);
  }
}
int main()
{ char ch;
int x,pos;
head=NULL;
while(1)
{
  cout<<"operation u want to perform\n 1.create 2.deletebeg 3.deletelast 4.deleteanypos 5.print\n";
  cin>>ch;
  if(ch=='1')
  {  cout<<"enter input\n";
     cin>>x;
     create(x);
  }
   if(ch=='2')
  { deletebeg() ;
  }
   if(ch=='3')
  {  deleteend() ;
  }
  if(ch=='4')
  {  cout<<"enter position\n";
       cin>>pos;
     deleteanypos(pos); 
  }
   
  if(ch=='5')
  {  print();
  }
   }
    return 0;
}