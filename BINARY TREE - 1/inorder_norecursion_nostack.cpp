/////////////////////Morris Traversal in binary tree/////O(1) space
#include <bits/stdc++.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

/* Function to traverse the binary tree without recursion
   and without stack */
void MorrisTraversal(struct Node* root)
{
    struct Node *current, *pre;
 
    if (root == NULL)
        return;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            printf("%d ", current->data);
            current = current->right;
        }
        else {
 
            /* Find the inorder predecessor of current */
            pre = current->left;
            while (pre->right != NULL
                   && pre->right != current)
                pre = pre->right;
 
            /* Make current as the right child of its
               inorder predecessor */
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
 
            /* Revert the changes made in the 'if' part to
               restore the original tree i.e., fix the right
               child of predecessor */
            else {
                pre->right = NULL;
                printf("%d ", current->data);
                current = current->right;
            } /* End of if condition pre->right == NULL */
        } /* End of if condition current->left == NULL*/
    }
}

struct Node* newtNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
int main()
{
    /* Constructed binary tree is
            1
          /   \
         2     3
       /   \
      4     5
  */
    struct Node* root = newtNode(1);
    root->left = newtNode(2);
    root->right = newtNode(3);
    root->left->left = newtNode(4);
    root->left->right = newtNode(5);
 
    MorrisTraversal(root);
 
    return 0;
}