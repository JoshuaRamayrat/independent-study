/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    struct node *temp1 = root;
    
    string output("");
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            temp1 = temp1->left;
            if (temp1->right == NULL && temp1->left == NULL)
            {
                output += temp1->data;
                temp1 = root;
            }
        }
        
        if (s[i] == '1')
        {
            temp1 = temp1->right;
            if (temp1->right == NULL && temp1->left == NULL)
            {
                output += temp1->data;
                temp1 = root;                
            }
        }
        
    }
    cout << output;
}

