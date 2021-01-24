// BASIC LL
#include<stdio.h>
#include<stdlib.h>

struct Node                             // Creating a structure for for a Node in LL
{
   int data; 
   struct Node *next;                   // Created a Pointer of type Node 
};


int main ()
{
    struct Node *A;                     // Node pointer for head node
    A = NULL;
    
    struct Node *temp = (struct Node *) malloc (sizeof(struct Node));    // create a node by assigning dynamic memory of size struct node

    temp->data = 10;                    // Same as *(temo).data
    temp->next = NULL;

    A = temp;
    printf("%d\n", A->data);

}