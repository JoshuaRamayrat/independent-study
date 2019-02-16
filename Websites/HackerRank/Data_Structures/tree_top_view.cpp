/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void printReverse(node * root);


void topView(node * root) 
{
    
    struct node *originalHead = root;
    struct node *temp1 = root;
    struct node *temp1Head = temp1;
    
    while (root->left != NULL)
    {
        root = root->left;
        temp1->left = root;
        temp1 = temp1->left;
    }
    
    printReverse(temp1Head);
    
    while (originalHead->right != NULL)
    {
        
        originalHead = originalHead->right;
        cout << originalHead->data << " ";
        
    }
    
}

void printReverse(node * root)
{
    if (root == NULL)
    {
        return;
    }
    else 
    {
        printReverse(root->left);
        cout << root->data << " ";
    }
}


/*
   while (root->left != NULL)
    {
        topView(root->left);
    }
    if (root->left == NULL){
        cout << root->data << " ";
        return;
    }
    
    
    
    
    
    if (root->left == NULL)
    {
        cout << root->data << " lol";
        return;
    }
    
    topView(root->left);
    
    while (root->right != NULL)
    {
        cout << root->data << " here";
        root = root->right;
    }
    
*/
