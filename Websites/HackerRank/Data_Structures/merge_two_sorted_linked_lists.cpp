
/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* MergeLists(Node *headA, Node* headB)
{
    
  struct Node *temp1 = headA;
  struct Node *temp2 = headB;
    
    int sizeA = 0;
    int sizeB = 0;
    
    while (temp1 != NULL)
    {
        sizeA = sizeA + 1;
        temp1 = temp1->next;
    }
    
    while (temp2 != NULL)
    {
        sizeB = sizeB+1;
        temp2 = temp2->next;
    }
    
    int indexA = 0;
    int indexB = 0;
    
    struct Node *headC = new Node();
    struct Node *tempC = headC; 
    headC = tempC;
    struct Node *tempA = headA;
    struct Node *tempB = headB;
    
    while (indexA < sizeA && indexB < sizeB)
    {
        if (tempA->data <= tempB->data)
        {
            tempC->next = tempA;
            tempC = tempC->next;
            tempA = tempA->next;
            indexA += 1;

        } 
        else if (tempA->data > tempB->data)
        {
            tempC->next = tempB;
            tempC = tempC->next;
            tempB = tempB->next;
            indexB += 1;

        }
    }
    
    if (indexA < sizeA)
    {
        tempC->next = tempA;
        tempC = tempC->next;
        tempA = tempA->next;

    }
    if (indexB < sizeB)
    {
        tempC->next = tempB;
        tempC = tempC->next;
        tempB = tempB->next;

    }
    
    struct Node *newHead = headC->next;
    
    return newHead;
    
}







