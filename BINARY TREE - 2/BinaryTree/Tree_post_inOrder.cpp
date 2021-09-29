//////Build binary tree from- PostOrder and InOrder 
////this approach time complexity = O(n^2)

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

int search(int inorder[], int start, int end,int curr)
{
    for( int i=start; i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}
Node* buildTree( int postorder[], int inorder[], int start, int end)
{
    static int idx =end;
    if(start>end)
    {
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node* node = new Node(curr);
    if(start == end)
    {
        return node;
    }
    int pos = search(inorder, start,end,curr);
      node->right = buildTree(postorder, inorder, pos+1, end);
    node->left = buildTree(postorder, inorder, start, pos-1);
   
     return node;
}
void printPre(Node*root)
{    
    if(root==NULL)
    {
        return;
    }
     cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}
int main(){
   int postorder[] = {8,4,5,2,6,7,3,1 };
   int inorder[]  = {4,8,2,5,1,6,3,7};
   int n = sizeof(inorder)/sizeof(inorder[0]);
    Node*root=  buildTree(postorder, inorder, 0, n-1);
    printPre(root);
    return 0;
}