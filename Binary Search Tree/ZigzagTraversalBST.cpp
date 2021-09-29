///// Zigzag traversal in BST///////////////////
// if we print left--> right in 1st level then we need to print right-->left in 2nd level(in level order)
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

void zigzag(Node*root){
       if(root==NULL)return;
    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool leftToRight = true;
    currLevel.push(root);
    while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();

        if(temp){
            cout<<temp->data<<" " ;

        

        if(leftToRight){
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }
    /////// right to left
        else{
              if(temp->right){
                nextLevel.push(temp->right);
            }
             if(temp->left){
                nextLevel.push(temp->left);
            }
        }
      }
         if(currLevel.empty()){
             leftToRight =  !leftToRight;
             swap(currLevel,nextLevel);
         }
   }
}
 
int main(){

 /*     ----->5
            / \
           1   7<-------
            \
      ------>3
            / \
           2   4<-------                                              */

    Node* root = new Node(5);
    root->left =  new Node(1);
    root->right =  new Node(7);
    root->left->right = new Node(3);
    root->left->right->right =new Node(4);
    root->left->right->left = new Node(2);
  
    zigzag(root);
    return 0;
}