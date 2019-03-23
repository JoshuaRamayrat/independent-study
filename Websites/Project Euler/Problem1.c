//Project Euler.
//multiples of 3 or 5 for all numbers below 1000

#include <stdio.h>

int main() {

    int a[1000]; //multiples of 5 all bunched into an array
    int j = 0; // and its starting index
    
    int b[1000]; //multiples of 3 all bunched into an array
    int k = 0;
    // and its starting index

    for (int i = 3; i < (1000); i++)
    {
        if (i%3 == 0){
            a[j] = i;
            j += 1;
        }
        if (i%5 == 0){
            b[k] = i;
            k += 1;
        }
    }
    
    /*
    
    printf("Printing multiples of 3. ");
    for (int lol = 0; lol <= j; lol++){
        printf("%d \n", a[lol]);
    }
     
    printf("Printing multiples of 5. ");
    for (int lol = 0; lol <= j; lol++){
        printf("%d \n", b[lol]);
    }
    
    */
    
    return 0;
    
}

/*
typedef struct node
{
    int data;
    struct node* next;
} node;

typedef void (*callback)(node* data);

node* create(int data, node* next)
{
    node* new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL)
    {
        printf("Error creating a new node. \n");
        exit(0);
    }
    new_node -> data = data;
    new_node -> next = next;
    
    return new_node;
}

node* prepend(node* head, int data)
{
    node* new_node = create(data,head);
    head = new_node;
    return head;
}

node* append(node* head, int data)
{
    if (head == NULL)
        return NULL;
    node *cursor = head;
    while (cursor -> next != NULL)
        cursor = cursor -> next;
    
    node* new_node = create(data,NULL);
    cursor -> next = new_node;
    
    return head;
}

node* insert_after(node* head, int data, node* prev)
{
    if (head == NULL || prev == NULL)
        return NULL;
    node *cursor = head;
    while (cursor != prev)
        cursor = cursor -> next;
    if (cursor != NULL)
    {
        node* new_node = create(data,cursor-> next);
        cursor -> next = new_node;
        return head;
    } else
    {
        return NULL;
    }
}
 */
