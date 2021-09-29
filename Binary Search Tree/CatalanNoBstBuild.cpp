// Build all possible combination of BST using concept of catalan no.

//#//
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

vector<Node*>constructTrees(int start, int end){

   vector<Node*>trees;
   if(start>end){
       trees.push_back(NULL);
       return trees;
       }
   for(int i=start; i<=end;i++){
   
   vector<Node*> Lsubtree= constructTrees(start, i-1);
   vector<Node*> Rsubtree= constructTrees(i+1,end);


    for(int j=0;j<Lsubtree.size(); j++ ){

          Node* left =Lsubtree[j];
          for(int k=0; k<Rsubtree.size(); k++)
          {
              Node*right = Rsubtree[k];
              Node* node = new Node(i);
              node->left = left;
              node->right = right;
              trees.push_back(node);
          }
        }
      }

return trees;
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
  
     vector<Node*> totalTrees = constructTrees(1,3);
     for(int i=0; i<totalTrees.size(); i++)
     {
         cout<<(i+1)<<" :";
         printPreorder(totalTrees[i]);
         cout<<endl;
     }
    return 0;
}