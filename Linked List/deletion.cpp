                            //  SINGLY LINKED LIST- DELETION
#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
node*head,*ptr,*temp,*pre;
void create(int x)
{
node*ptr=new node();
ptr->data=x;
ptr->next=head;
head=ptr;
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
 temp=head;
 head=head->next;
 free(temp);
}
void deleteend()
{
  temp=head;
  while(temp->next!=NULL)
  {
    pre=temp;
    temp=temp->next;
  }
    if(temp==head)
    {
      head==NULL;
      free(temp);
    }
    else
    {
      pre->next=NULL;
      free(temp);
    }
}
void deleteanypos(int pos)
{
  temp=head;
  int i=1;
  while(i<pos)
  {
    ptr=temp;
    temp=temp->next;
    i++;
  }
  if(temp==head)
  {
    head==NULL;
    free(temp);
  }
  else
  {
     ptr->next=temp->next;
  free(temp);
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