////Diameter of BT(binary tree) - number of nodes in the longest path between any two leaves;
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

int diameterBT(Node* root, int*height){
    if(root==NULL)
    {
        *height= 0;
        return 0;
    }
   int lh=0, rh =0;
   int lDia = diameterBT(root->left, &lh);
   int rDia = diameterBT(root->right, &rh);
  int currDia = lh+rh+1;
  *height = max(lh,rh)+1;
  return max(currDia, max(lDia, rDia));

}


int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
     root->left->left = new Node(4);
    root->left->right = new Node(5);
   int height =0;
   cout<<diameterBT(root,&height);
    return 0;
}