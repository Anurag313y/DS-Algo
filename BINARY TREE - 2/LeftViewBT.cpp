/////Left view of Binary Tree//////
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

void leftView(Node*root){
     if(root==NULL)
     {
         return ; 
     }
     queue<Node*>q;
     q.push(root);
     while(!q.empty())
     {
         int n = q.size();
         for( int i=0;i<n;i++)
         {
             Node* curr= q.front();
             q.pop();
             if(i==0)
            {
                cout<<curr->data<<" ";
            }

            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
             if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
         }
     }
   
}



int main(){

          /*            '1
                      /   \
                     '2     3
                    / \
                   '4   5                       */
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
     root->left->left = new Node(4);
    root->left->right = new Node(5);
   
   leftView(root);
  
    return 0;
}