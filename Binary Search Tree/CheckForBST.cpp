/////// Check For BST( check for valid BST)
/////// Time complexity  = O(n)
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

bool isBST(Node*root, Node* min=NULL, Node*max=NULL)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL &&root->data <= min->data){
        return false;
    }
     if(max!=NULL &&root->data >= max->data){
        return false;
    }


    bool Lvalid = isBST(root->left, min,root);
    bool Rvalid = isBST(root->right,root, max);
    return Lvalid and Rvalid;
}
 
int main(){

 /*          5
            / \
           1   7
            \
             3
            / \
           2   4                                              */

    Node* root = new Node(5);
    root->left =  new Node(1);
    root->right =  new Node(7);
    root->left->right = new Node(3);
    root->left->right->right =new Node(4);
    root->left->right->left = new Node(2);
  
  if(isBST(root,NULL,NULL))
  {
      cout<<"Valid BST";
  }
  else{
      cout<<"Not valid BST";
  }
    return 0;
}