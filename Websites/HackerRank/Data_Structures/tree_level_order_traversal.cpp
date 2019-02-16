#include <queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
    
    struct node *temp = root;
    queue<node> testing;
    testing.push(*temp);
    
    
    
    while (!testing.empty())
    {
        *temp = testing.front();
        
        cout << temp->data << " ";
        
        if (temp->left != NULL)
        {
            testing.push(*temp->left);
        }
        if (temp->right != NULL)
        {
            testing.push(*temp->right);
        }
        testing.pop();
        //temp->data = testing.front();
    }
  
    
}

