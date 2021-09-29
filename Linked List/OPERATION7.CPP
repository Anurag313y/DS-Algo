                    //  CIRCULAR LINKED LIST-DELETION
 #include <iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
node*tail,*temp,*ptr;
void insert(int x)
{  node*ptr=new node();
   ptr->data=x;
   ptr->next=NULL;
   if(tail==NULL)
   {
       tail=ptr;
       tail->next=ptr;
   } 
   else
   {
       ptr->next=tail->next;
       tail->next=ptr;
       tail=ptr;
   }
}
    void dltbeginning()
    {  node*temp=tail->next;
       if(tail==NULL)
    {
      cout<<"empty list";
    }
    else if(temp->next==temp)
    {
      tail=NULL;
      free(temp);
    }
      else{
      
      tail->next=temp->next;
       free(temp);}
        
     }
    void dltatAnupos(int pos)
    {  node*temp=tail->next;
       int i=1;
    for(int i=1;i<pos;i++)
    {
         ptr=temp;
         temp=temp->next;
    } 
    ptr->next=temp->next;
    free(temp);

    } 
    void print()
    {
      node*temp=tail->next;
     do
     {
         cout<<temp->data<<"  ";
         temp=temp->next;
     } while (temp!=tail->next);
     
    }
    void  dltlast()
    {  
       node*temp=tail->next;
      if(tail==NULL)
      {
        cout<<"empty list";
      }
      else if(temp->next==temp)
      {
        tail=NULL;free(temp);
      }
      else
      {
        while(temp->next!=tail->next)
        {                                                         //here ptr is previous pointer and temp is current pointer
           ptr=temp; 
           temp=temp->next;
        }
        ptr->next=tail->next;
        tail=ptr;
        free(temp);
      }
   }
   void checkCircular(){
     cout<<tail->next->data;
   }
int main()
{ char ch;
  int x,pos;
 tail=NULL;
 while(1)
 {
     cout<<"enter your choice\n 1.insert 2.dltbeginning 3.dltatAnupos 4. dltlast 5.print 6.checkCircular\n";
     cin>>ch;
   
   if(ch=='1')
   { cout<<"enter input data";
       cin>>x;
     insert(x);
   }
   if(ch=='2')
   {
     dltbeginning();
   }
   if(ch=='3')
   {  cout<<"enter position\n";
   cin>>pos; 
     dltatAnupos(pos);
   }
 
 
 
 if(ch=='4')
   {
       dltlast();
   }
 if(ch=='5')
   {
       print();
   }
   if(ch=='6')
   {
       checkCircular();
   }
 }
    return 0;
}

