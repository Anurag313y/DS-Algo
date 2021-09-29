                            // QUEUE USING ARRAYS
#include<iostream>
using namespace std;
int queue[100], n=100,front=-1,rear=-1;
void insert(){
    int val;
    if(rear==n-1)
    cout<<"Queue Overflow"<<endl;
    else{
        if(front==-1)
        front=0;
        cout<<"value to be inserted"<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}
void delet(){
    if(front==-1|| front>rear){
        cout<<"Queue Underflow"<<endl;
    
    }
    else{
        cout<<"Element deleted from queue is"<<queue[front]<<endl;
        front++;
    }
}
void display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue elements are:"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<"  ";
            cout<<endl;
        }
    }
}

int main()
{ int ch;
cout<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
do{
    cout<<"Enter your choice:"<<endl;
    cin>>ch;
    switch(ch){
        case 1: insert();
        break;
        case 2: delet();
        break;
        case 3: display();
        break;
        case 4: cout<<"Exit";
        break;
        default:cout<<"invalid choice";
             }
}while(ch!=4);
    return 0;
}
