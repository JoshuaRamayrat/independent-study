/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
} node;

*/

#include <queue>

node * insert(node * root, int value) 
{
    // 1. If the tree is empty, return a new, single node 
  if (root == NULL) 
  { 
    struct node *temp = new node();
    temp->data = value;
    root = temp;
    return(temp); 
  } 
  else 
  {
    // 2. or recur down the tree.
    if (value <= root->data)
    { 
        root->left = insert(root->left, value); 
    }
    if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    return(root); // return the (unchanged) node pointer 
  } 
}

