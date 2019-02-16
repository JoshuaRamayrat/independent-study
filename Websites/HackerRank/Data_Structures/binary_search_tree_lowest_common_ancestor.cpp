/*
Node is defined as 

typedef struct node
{
   int data;
   node *left;
   node *right;
}node;

*/

int thisNode = 0;

node *lca(node *root, int v1, int v2)
{
	struct node *temp = root;
	struct node *left = new node();
	struct node *right = new node();

	if (temp == NULL)
	{
		return 0;
	}

	//base case
	if (temp->data == v1 || temp->data == v2)
	{
		return temp;
	}

	left = lca(root->left, v1, v2);
	right = lca(root->right, v1, v2);

	if (left != NULL && right != NULL){return temp;} 
    if (left != NULL && right == NULL){return left;}
    if (left == NULL && right != NULL){return right;} 
    if (left == NULL && right == NULL){return 0;}
    
    return 0;
}


