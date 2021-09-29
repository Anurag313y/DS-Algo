////Height of BT(binary tree)
///Time complexity = O(n)
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

int hightFind(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lHight = hightFind(root->left);
    int rHight = hightFind(root->right);
    return max(lHight,rHight) + 1;
}

int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
     root->left->left = new Node(4);
    root->left->right = new Node(5);
   cout<<hightFind(root);
    return 0;
}