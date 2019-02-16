/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{

    Node *temp2 = head;
    Node *temp3 = temp2->next;
    while (temp2->next != NULL)
    {
        if (temp2->data != temp3->data)
        {
            cout << temp2->data << " ";
        }
        temp2 = temp2->next;
        temp3 = temp2->next;
        
    }
    return temp2;
    
}

