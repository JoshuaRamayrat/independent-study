#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}
 
void Print(){
    Node *temp = head;
    while (temp!= NULL){
        printf("%d-->", temp);
        temp = temp->next;
    }
}

Node* InsertNth(Node *head, int ndata, int position)
{
    
    Node *temp1 = head;
    Node *temp2 = new Node();
    
    //Made this so that I can reset the position of head.
    //I'm pretty sure it's a problem in my code.
    
    Node *originalHead = new Node();
    originalHead = head;
    
    //temp2 will hold the data this time.
    temp2->data = ndata;
    
    if (position = 0)
    {
        
        temp2->next = head;
        head = temp2;
        return head;
        
    }
    else if (head == NULL)
    {
        
        head = temp2;
        return head;
        
    }
    else
    {
        
        for (int i = 0; i < position-2; i++)
        {
            temp1 = temp1->next;    //temp1 points to the (n-1)th position.
        }
        
        temp2 = temp1->next;  //temp2 now points to the nth position.
        temp1->next = temp2;  //temp1->next should now point to the nth position.
        head = originalHead;  //this probably isn't necessary.
        return head;
    }
    
}

int main()
{
    int numInputs;
    

    
    cout << "Enter the number of inputs to go into the linked list: ";
    cin >> numInputs;
    
    for (int i = 0; i < numInputs; i++){
        
        int data;
        int location;
        
        cin >> data >> location;
        InsertNth(location, data);
        
    }
}
