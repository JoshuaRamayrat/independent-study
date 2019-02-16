/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
Node** p = &head;
for(int i = 0; i < position; ++i)
    p = &(*p)->next;
*p = new Node {data, *p};
return head;
}
/*
Node* InsertNth(Node *head, int data, int position)
{
  struct Node *temp1 = new Node();
  struct Node *temp2 = new Node();
  struct Node *headHolder = new Node();
    
    headHolder = head;
    temp1->data = data;
    
    if (head == NULL){
        temp1->next = NULL;
        head = temp1;
        cout << "Null, return value: " << temp1->data << endl;
        return temp1;
    } else {
    
    if (position == 0){
        temp1->next = head;
        head = temp1;
        cout << "position = 0, return value: " << temp1->data << endl;
        return temp1;
    } 
    
    if (position == 1) {
        temp1->next = head->next;
        head->next = temp1;
        cout << "position = 1, return value: " << headHolder->data << endl;;
        return headHolder;
    }
    
    if (position >= 2) {
        temp2 = head;
        for (int i=0; i <= position-2; i++){
            temp2 = temp2->next;
            
        }
        temp1 = temp2->next;
        temp2->next = temp1; 
        cout << "position >= 2, return value: " << headHolder->data << endl;
        return headHolder;
    }
    }
    cout << "All conditionals passed, return value: " << head->data << endl;
    return head;
}
*/
