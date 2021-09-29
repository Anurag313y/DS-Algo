///Binary search tree- left tree is smaller than/////////////////// 
////its parent and right is greater than its parent////////////////////////////////////
/// inorder traversal of BST give = sorted values

////search operation time complexity in -   
///  BT = O(n)               
/// BST=O(log n)
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left,*right;
    Node(int val){
        data = val;
        left= NULL;
        right = NULL;
    }
};

Node* insertBST(Node*root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = insertBST( root->left ,val);
    }
    else{
        root->right = insertBST( root->right ,val);
    }
    return root; 
}

 void inorder(Node*root){
     if(root==NULL)
     {
         return;
     }
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);

 }
int main(){

 /*          5
            / \
           1   7
            \
             3
            / \
           2   4                                              */

    Node* root = NULL;
    root= insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    
   ////print inorder
 inorder(root);
    return 0;
}