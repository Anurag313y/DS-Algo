                    //   DOUBLY CIRCULAR LINKED LIST-INSERTION 
                   
#include <iostream>
using namespace std;
struct node
{
    int data;
    node*next;
    node*prev;
};
node*tail,*head;
void insertatlast(int x)
{  node*ptr=new node();
   ptr->data=x;
   ptr->next=NULL;
   ptr->prev=NULL;
   if(tail==NULL)
   {
       tail=ptr;
       tail->next=ptr;
       ptr->prev=tail;
   } 
   else
   {
      ptr->prev=tail;
      ptr->next= tail->next;
      tail->next= ptr;
       ptr->next->prev= ptr;
       tail=tail->next;

   }
   
}
    void insertAtanupos(int z)
    {  node*ptr=new node();
      
    ptr->data=z;
    ptr->prev=NULL;
    ptr->next=NULL;
     node*temp= tail->next;
    int pos;
    cout<<"enter position\n";
    cin>>pos;
    int i=1;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    
        ptr->prev=temp;
        ptr->next=temp->next;
        ptr->next->prev=ptr;
        temp->next=ptr;


    } 
    void print()
    {
      node*temp= tail->next;
      do{
        cout<<temp->data<<" ";
        temp=temp->next;
      }while(temp!=tail->next);

    }
    void insertbeg(int y)
    { node*ptr=new node();
      ptr->data=y;
      ptr->next=NULL;
      ptr->prev= NULL;
        if(tail==NULL)
   {
       tail=ptr;
       tail->next=ptr;
      
   } 
   else{
ptr->next= tail->next;
tail->next= ptr;
   }
      
      
    }
     void checkCircular(){
      if( tail->next->prev= tail)
      { cout<<tail->next->data<<"\n";
        cout<<"Yes it is doubly circular ll \n";
      }
      else{
        cout<<"NO it is doubly circular ll \n";
      }
     }
int main()
{ char ch;
  int x,y,z;
 tail=NULL;
 while(1)
 { 
     cout<<"enter your choice\n 1.insertbeginning 2.insertatLast 3.insertatAnupos 4.print 5. checkCircular\n";
     cin>>ch;
   if(ch=='1')
   { cout<<"enter input data";

       cin>>y;
     insertbeg(y);
   }
   if(ch=='2')
   { cout<<"enter input data";
       cin>>x;
     insertatlast(x);
   }
   if(ch=='3')
   { cout<<"data u want to insert\n";
       cin>>z;
       insertAtanupos(z);
   }
  
    if(ch=='4')
   {
       print();
   }
   if(ch=='5')
   {
      checkCircular();
   }
 }
    return 0;
}

