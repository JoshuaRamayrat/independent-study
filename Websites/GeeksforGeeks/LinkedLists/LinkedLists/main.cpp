//
//  main.cpp
//  LinkedLists
//
//  Created by Joshua Ramayrat on 8/25/17.
//  Copyright © 2017 Joshua Ramayrat. All rights reserved.
//

#include <iostream>

struct node {
    int data;
    struct node *next;
};

//References are called pointers to pointers.
//This function takes a reference as an argument and the data to be
//placed in the new node.
//The head_ref reference argument should be the original head of the list.
//This function
void push (struct node** head_ref, int new_data)
{
    //allocating memory for node.
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    
    //putting in data.
    new_node -> data = new_data;
    
    //make the 'next' of the new node the original head.
    new_node -> next = head_ref;
    
    //make the head of the list as the new_node.
    (*head_ref) = new_node;
}

//doing this on the fly/basing my answer off of push func.
//this function is supposed to place an element after a specific element in the linked list.
void insertAfter(struct node** tail_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    
    new_node -> data = new_data;
    new_node -> next = tail_ref->next;
    tail_ref -> next = new_node;
    
}

//this function is supposed to place a new data element at the end of a linked list.
void append(struct node** head_ref, int new_data)
{
    
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *last = *head_ref;
    
    //new_node has data pointing to new_data.
    new_node -> data = new_data;
    new_node -> next = NULL;
    
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    
    while (last-> next != NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
    
}

//"Deleting a key"
//double pointers means a "list of values"
//like char **sentence means a list of words.
void deleteKey(struct node **head_ref, int specData)
{
    struct node* temp = *head_ref, *prev;
    
    
    if (temp != NULL && temp->data==specData)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    
    while (temp != NULL && temp->data != specData)
    {
        prev = temp;
        temp = temp->next;
    }
    
    //conditional if you can't find specData in list.
    if (temp == NULL) return;
    
    free(temp); //this command frees temp from memory.
}

//given a singly linked list and a position, delete a
//linked list node at the given position.
void deleteNode(struct node **head_ref, int node)
{
    struct node* temp = *head_ref;
    
    if (*head_ref == NULL){
        return;
    }
    
    if (position == 0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    
    
    
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
















