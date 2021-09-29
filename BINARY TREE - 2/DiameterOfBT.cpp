////Diameter of BT(binary tree) - number of nodes in the longest path between any two leaves;
//Time complexity= O(n^2)
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
{    if(root==NULL)
{
    return 0;
}
     int lhight = hightFind(root->left);
      int rhight = hightFind(root->right);
      return max(lhight, rhight) +1;
}
int diameterBT(Node* root){
     if(root==NULL)
{
    return 0;
}
  int lhight = hightFind(root->left);
  int rhight = hightFind(root->right);
  int currDia =   lhight+ rhight +1;

 int lDia = diameterBT(root->left);
 int rDia = diameterBT(root->right);

 return max(currDia, max(lDia,rDia));


}


int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
     root->left->left = new Node(4);
    root->left->right = new Node(5);
   
   cout<<diameterBT(root);
    return 0;
}