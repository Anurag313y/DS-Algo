//////////BASIC CREATION OF BINARY TREE//////////////////////////
//  Program is to insert the number entered by the user in the binary tree .
#include <bits/stdc++.h>
using namespace std;

// tree node
struct Node{
int data;
Node* left,*right;
};

// returns a new tree Node
Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// A function to create binary tree.
Node* Tree(Node* temp, int data )
{
    // If the tree is empty, return a new node
    if (temp == NULL)
        return newNode(data);

    // Otherwise, recur down the tree
    if (data < temp->data)
        temp->left = Tree(temp->left, data);
    else
        temp->right = Tree(temp->right, data);

    //return the (unchanged) node pointer
    return temp;
}

//function to display all the element present in the binary tree
void display(struct Node* root)
{

    if (!root)
    return;
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);

}

//function to insert element in binary tree
void insert(struct Node* root , int value)
{
    queue<struct Node*> q;
    q.push(root);

    // Do level order traversal until we find an empty place.
    while (!q.empty()) {
        struct Node* root = q.front();
        q.pop();

        if (!root->left) {
            root->left = newNode(value);
            break;
        } else
            q.push(root->left);

        if (!root->right) {
            root->right = newNode(value);
            break;
        } else
            q.push(root->right);
    }
}





int main()
{
char ch;
	int n, arr[20],size;
	Node *root = new Node;
	root = NULL;

	cout<<"Enter the size of array : ";
	cin>>size;

	cout<<"Enter the elements in array : ";
	for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
	// Construct the binary tree.
	for(int i = 0; i < size; i++)
	{
	    root = Tree(root, arr[i]);
	}


	cout<<"\nEnter the Element to be insert : ";
	cin>>n;
        insert(root,n);
        cout<<"\nElement Inserted"<<endl;
        cout<<"\nAfter Inserting "<<endl;
        cout<<"Elements are: ";
        display(root);
        cout<<endl;





  return 0;
}

