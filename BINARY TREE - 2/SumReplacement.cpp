////Sum Replacement in BT - replace the value of each node with sum of all subTree nodes and itself///////
//Time complexity= O(n)
# include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;

   Node(int val)
   {
       data = val;
       left=NULL;
       right =NULL;
   }

};

void sumReplace(Node*root){
     if(root==NULL)
     {
         return ; 
     }
    sumReplace(root->left);
    sumReplace(root->right);

    if(root->left !=NULL)
    {
        root->data+= root->left->data;
    }
    if(root->right !=NULL)
    {
        root->data+= root->right->data;
    }
}

void preOrder(Node*root){
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

int main(){

          /*            1
                      /   \
                     2     3
                    / \
                   4   5                        */
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
     root->left->left = new Node(4);
    root->left->right = new Node(5);
   
   preOrder(root);
   cout<<"\n";
   sumReplace(root);
    cout<<"\n";
preOrder(root);
    return 0;
}