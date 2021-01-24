// adding at the end
// Reversing a LL
#include<stdio.h>
#include<stdlib.h>
// declaring node struct
struct Node
{
    int data;
    struct Node *next;
};

//reverse fun
void reverse (struct Node **head)               // have passed address of head captured in **head
{
    struct Node *prev, *current, *next;                      
    prev = NULL;
    current = *head;
    next = NULL;

    while(current != NULL)                      // until last element we will traverse and reverse the direction of the LL
    {
        next = current->next;                   
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}


void insert (struct Node **head , int data)   
{
    struct Node *temp1 = NULL;
    temp1 = (struct Node *)malloc (sizeof(struct Node));    // created a block for the new node
    temp1->data = data;                                     // inserting data
    temp1->next = NULL;                                     // keeping next as NUll for now

    if (*head == NULL)                                      // when LL is empty
        *head = temp1;                                      // head will point to new node temp1
    else                                                    // when LL not empty
    {
        struct Node *traverser = *head;                     // traverser to reach the end to add elements at end (appending)
        while(traverser->next != NULL)
        {
            traverser = traverser->next;    
        }
        traverser->next = temp1;                            // temp1 added at the end now
    }
}
void print(struct Node **head)
{
        struct Node *temp;                  // clone of head created to traverse the LL
        temp = *head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);          // Printing...
            temp = temp->next;
        }
        printf("\n");
}


void main ()
{

    struct Node *head = NULL;                   // Created head locally this time
    insert (&head,10);                          // passing address of head
    insert (&head,20);
    insert (&head,30);   // as head is local to main, we need to pass its address,
    //                      if we dont then its value will remain unchanged IN MAIN
    print(&head);
    reverse(&head);
    print(&head);
}