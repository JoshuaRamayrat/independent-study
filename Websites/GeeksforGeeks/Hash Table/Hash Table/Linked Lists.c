//
//  Linked Lists.c
//  Linked Lists
//
//  Created by Joshua Ramayrat on 8/19/17.
//  Copyright © 2017 Joshua Ramayrat. All rights reserved.
//

#include "Linked Lists.h"
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{
    while(n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
}

int main()
{
    //I guess you're supposed to declare them as null first and put struct before them.
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    //allocating memory for each element of the list.
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    
    second->data = 3;
    second->next = third;
    
    third->data = 50;
    third->next = NULL;
    
    printList(head);
    return 0;
    
}