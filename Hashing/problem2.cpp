//problem 2: Print verticle order of binary tree
// input = given array representation of binary tree 
//////input ={10,7,4 ,3,11,14,6}; 
     /*      10
            /   \
           7     4
          / \   / \
         3  11 14  6        */

// output = 3(-2 distance),7(-1 dis), {10,11,14}(0 dis),  4(1 dis),6(2 dis)
//sol. using hashing ....implementation using Map
////////////////  0 ---> 10,11,14
////////////////  -2 ---> 3
////////////////  -1 ---> 7
////////////////  1 ---> 4
////////////////  2 ---> 6
                
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key ;
    Node * left,*right;
};

Node* newNode(int key){
   Node* node = new Node;
      node->key =key;
      node->left= node->right = NULL;
      return node;
}
void getVerticalOrder(Node*root, int hdis,map<int, vector<int>> &m ){
     if(root==NULL){
       return;
     }
     m[hdis].push_back(root->key);
      getVerticalOrder(root->left, hdis-1, m);
        getVerticalOrder(root->right, hdis+1, m);
 }

int main(){
   Node*root = newNode(10);
   root->left =  newNode(7);
   root->right =  newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
     root->right->right = newNode(6);

     map<int, vector<int>> m;
     int hdis = 0;
     getVerticalOrder(root,hdis,m);

     map<int, vector<int>> :: iterator it;
     for(it= m.begin(); it!=m.end();it++){
          
          for(int i=0; i<(it->second).size();i++){
            cout<<(it->second)[i]<<" ";
          }
          cout<<endl;
     }
    return 0;
}


