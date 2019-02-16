/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/

int FindMergeNode(Node *headA, Node *headB)
{
    if (headA == NULL || headB == NULL){
        return 0;
    }
    
    struct Node *temp1 = headA;
    struct Node *temp2 = headB;
    struct Node *returnNode = temp2;
    
    while (temp1->next != NULL)
    {
        while (temp2->next != NULL)
        {
            if (temp1->next == temp2->next)
            {
                returnNode = temp2->next;
                return returnNode->data;
            }
            temp2 = temp2->next;
        }
        temp2 = headB;
        temp1 = temp1->next;
       
    }
    return 0;

    // Complete this function
    // Do not write the main method. 
}

