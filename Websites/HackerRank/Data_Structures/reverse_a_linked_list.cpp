/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    struct Node *currentNode = head;
    struct Node *previousNode = NULL;
    struct Node *nextNode; 
    
    while (nextNode != NULL){
        nextNode = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;

        
    }
    head = previousNode;
    return head;
}

