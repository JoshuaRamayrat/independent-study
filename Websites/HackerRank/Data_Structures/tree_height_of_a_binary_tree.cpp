
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/


    int height(Node* root) 
    {
        int max = 0;
        if (root == NULL)
        {
            return -1;
        }
        else 
        {
            int left = height(root->left);
            int right = height(root->right);
            
            if (left>right){return left+1;}
            else {return right+1;}
        }
    }
  
