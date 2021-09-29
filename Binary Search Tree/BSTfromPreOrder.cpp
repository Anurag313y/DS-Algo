/// Build BST form PreOrder
/// Time-complexity = O(n)
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

Node* buildBST(int preorder[], int *preorderIdx, int key,  int min, int max, int n){
     if(*preorderIdx >= n)
     {
         return NULL;
     }
     Node*root= NULL;
     if(key >min && key< max)
     {
         root = new Node(key);
         *preorderIdx = *preorderIdx + 1 ;  

         if(*preorderIdx < n)
         {
             root->left = buildBST(preorder, preorderIdx, preorder[*preorderIdx], min, key , n);
         }
         if(*preorderIdx < n)
         {
             root->right = buildBST(preorder, preorderIdx, preorder[*preorderIdx], key ,max, n);
         }
     }

  return root;
}
 void printPreorder(Node*root){
     if(root==NULL)
     {
         return;
     }
     cout<<root->data<<" ";
     printPreorder(root->left);
     printPreorder(root->right);

 }
int main(){

 /*          5
            / \
           1   7
            \
             3
            / \
           2   4                                              */

    int preorder[] = {5,1,3,2,4,7};
    int n =6; 
    int preorderIdx = 0;
  Node*root =   buildBST(preorder, &preorderIdx, preorder[0], INT_MIN , INT_MAX,n);
  printPreorder(root);
    return 0;
}