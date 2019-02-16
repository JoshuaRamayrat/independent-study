/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    
    struct Node* temp1 = head;
    struct Node* temp2 = new Node();
    
    if (position == 0){
        head = temp1->next;
        free(temp1);
        return head;
    }
    if (position > 0){
        for (int i = 0; i < position-1; i++) {
             temp1 = temp1->next;          
        }        
        temp2 = temp1->next; //temp2 is now the nth node.
        temp1->next = temp2->next; //temp1 now points to the (n+1)th node.

        free(temp2);
        
        return head;
    }
    return head;
}

