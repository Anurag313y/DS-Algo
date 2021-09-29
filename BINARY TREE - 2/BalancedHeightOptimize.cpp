////Balanced Height Tree - for each node, the difference between 
// the height of the left subtree & right subtree <=1 ///////
//////           |left height - right height| <=1  /////////////////
//Time complexity= O(n);

////////////////////OPTIMIZED////////////////////////////
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

bool isBalanced(Node*root, int*height){
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(isBalanced(root->left, &lh)==false){
        return false;
    }
    if(isBalanced(root->right, &rh)==false){
        return false;
    }
    *height = max(lh,rh) +1;
    if(abs(lh-rh)<= 1)
    {
        return true;
    } 
    else{
        return false;
    }

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
   int height = 0; 
   if(isBalanced(root, &height)){
       cout<<"Balanced Tree";
   }
   else{
       cout<<"Unbalanced Tree";
   }
    return 0;
}