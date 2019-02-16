/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

//This function should insert a node at the tail of a linked list. 
//It takes the argument of head which is the pointer variable that points to the front of the list.
//It also takes the argument of ndata, which is the data that must be added to the end of the list. 
Node* Insert(Node *head, int ndata)
{
    
    //making a temporary node to fill data with at the end of the list-of-nodes.
    Node *temp = new Node();
      
    temp->data = ndata;
    temp->next = NULL;
    
    //conditional - if there are no elements to begin with.
    if(head == NULL)
    {
        head = temp;
        return head;
    }
    
    Node *temp2 = head;
    
    //while loop to continuously add ndata to the growing linked list.
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return head;
}

/*
Node* Insert(Node *head,int data)
{
    Node* temp = new Node();
    temp->data = data ;
    temp->next = NULL ;
    Node* root = head ;
    if(head == NULL){
        head = temp;
        head->next = NULL;
        return head;
    }
    else{
        while(head->next != NULL){
            head = head->next;
        }
        head->next = temp;
        return root;
    }     
}
*/
