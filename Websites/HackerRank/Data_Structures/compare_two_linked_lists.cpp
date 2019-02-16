/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    struct Node *currentA, *currentB;
    
    int sizeA = 0;
    int sizeB = 0;
    int totalCompare = 0;
    
    currentA = headA;
    currentB = headB;
    
    while (currentA != NULL){
        currentA = currentA->next;
        sizeA = sizeA + 1;
    }
    while (currentB != NULL){
        currentB = currentB->next;
        sizeB = sizeB + 1;
    }
    
    if (sizeA == sizeB){
        currentA = headA;
        currentB = headB;
    
        for (int i = 0; i < sizeA; i++)
        {
            if (currentA->data == currentB->data){
                totalCompare = totalCompare+1;
            }
            currentA = currentA->next;
            currentB = currentB->next;
        }
        if (totalCompare == sizeA){return 1;} else if (totalCompare != sizeA){return 0;}  
    }else{return 0;}
    return 0;
}






