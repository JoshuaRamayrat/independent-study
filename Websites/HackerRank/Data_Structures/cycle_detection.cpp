/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    
    if (head == NULL){return 0;}
    
    struct Node *temp1 = head;
    struct Node *temp2 = head;
    
    while (temp1 != NULL && temp2 != NULL){
        if (temp1 == temp2->next)
        { 
            return 1;
        }
        temp1 = temp1->next;
        
        temp2 = temp2->next;
        temp2 = temp2->next;
     
    }
    return 0;
} 
    
    
    
    /*
    int index = 0;

    while (temp != NULL)
    {
        vector <int> storageNode;
        int what = index;
        

        
        //start off by storing the temp data into the current index.
        storageNode[what] = temp->data;

        for (int i = 0; i < what; i++)
        {
            if ( temp->next == storageNode[i] ) 
            { 
                return 1;
            }
        }
        
        what += 1;
        temp = temp->next;
        if (temp->next == NULL)
        {
            return 0;
        }
    }
    */


