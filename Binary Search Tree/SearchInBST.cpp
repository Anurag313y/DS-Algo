////search in BST                
/// BST search op. time =O(log n)
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

Node* searchInBST(Node*root, int key){
    if(root==NULL) return NULL;
  if(root->data== key)return root;
  if(root->data >key) return searchInBST(root->left,key);
   if(root->data <key) return searchInBST(root->right,key);
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
  
  if(searchInBST(root,5)==NULL)
  {
      cout<<"doesn't exist";
  }
  else{
      cout<<"key exist";
  }
    return 0;
}