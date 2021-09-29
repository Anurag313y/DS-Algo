////Balanced Height Tree - for each node, the difference between 
// the height of the left subtree & right subtree <=1 ///////
//////           |left height - right height| <=1  /////////////////
//Time complexity= O(n^2);
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
int height(Node*root)
{     if(root==NULL)
{
    return 0;
}
     int lh = height(root->left);
     int rh = height(root->right);

    return max(lh,rh) +1;
}
bool isBalanced(Node*root){
    if(root==NULL)
    {
       return true;
    }
    if(isBalanced(root->left)== false)
    {
        return false;
    }
    if(isBalanced(root->right)== false)
    {
        return false;
    }

    int lh = height(root->left);
     int rh = height(root->right);
if(abs(lh-rh)<=1){
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
   
   if(isBalanced(root)){
       cout<<"Balanced Tree";
   }
   else{
       cout<<"Unbalanced Tree";
   }
    return 0;
}