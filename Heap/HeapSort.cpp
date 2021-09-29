// Heapsort-on-MaxHeap...sort in ascending order;
//EX- input = 4 6 1 3 2 5
// output = 1 2 3 4 5 6

//////////// For complete binary tree..........
////if heap size is N then,
/// 1) Range of leaves = floor(N/2)  to (N-1)
/// 20 range of internal nodes =  0 to floor(N/2)-1
#include<bits/stdc++.h>
using namespace std;

//Build max heap from array
 void heapify(int arr[],int n,int i){

     //parent
     int largest = i;

     //leftchild
     int l= 2*i+1;
     //rightchild
     int r= 2*i+2;
//if left child is larger than root
     if(l<n && arr[l]>arr[largest]){
         largest= l;
     }
     //if right child is larger than the largest so far
      if(r<n && arr[r]>arr[largest]){
         largest= r;
     }
     //if largest is not root
     if(largest !=i){
         swap(arr[i], arr[largest]);
         heapify(arr,n,largest);
     }
 }
void heapsort( int arr[], int n){
    
    //create max-heap
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    //one by one extract element from heap
    for(int i=n-1;i>0;i--){
       //swap 1st and last node
        swap(arr[0],arr[i]);
       //create max heap of reduced array
        heapify(arr,i,0);
    }
}
void printArray(int arr[],int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heapsort(arr,n);
    printArray( arr, n);
    return 0;
}
