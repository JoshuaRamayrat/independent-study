#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Insert(Node *head, int ndata);
void Print();

void Print(){
    Node *temp = head;
    while (temp!= NULL){
        printf("%d-->", temp);
        temp = temp->next;
    }
}

//this function should insert a node at the beginning of the list.
void insertBeginning(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));
    temp->data = x;
    temp->next = head->next;
    head = temp;
}

//the function should insert a new element at the end of the list.
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
        temp->data = ndata;
        return head;
    }
    
    //conditional if head is the only element.
    if (head->next == NULL)
    {
        head->next = temp;
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

int main()
{
    head = NULL;
    Insert(head, 5);
    Print();
}









/* This still needs more work
 
Node* Insert(Node *head,int ndata)
{
    //making a temporary node to fill data with at the end of the list-of-nodes.
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    
    temp->next = head;
    
    if(head == NULL)
    {
        temp->data = ndata;
    }
    
    if (head->next == NULL){
        head->next = temp;
        temp->data = ndata;
    }
    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp->next == NULL){
        temp->data = ndata;
    }
    
    return temp;
}

*/
