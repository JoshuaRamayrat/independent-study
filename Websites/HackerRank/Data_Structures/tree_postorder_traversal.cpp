/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

left right root.
*/


void postOrder(node *root) {
    
    //base case.
    if (root == NULL){return;}
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
    
}

