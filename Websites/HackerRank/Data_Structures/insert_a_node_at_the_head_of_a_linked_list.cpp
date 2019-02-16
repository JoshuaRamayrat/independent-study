/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    struct Node *temp1 = new Node();
    
    temp1->data = data;
    temp1->next = NULL;
    
    if (head == NULL){
        head = temp1;
        return head;
    }
    if (head != NULL){
        temp1->next = head;
        head = temp1;
        return head;
    }
    
    return head;
}

