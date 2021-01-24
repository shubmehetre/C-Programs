#include<stdio.h>
#include<stdlib.h>
// declaring node struct
struct Node
{
    int data;
    struct Node *next;
};

void reverse (struct Node *head)   
{
    struct Node *p = head;
    if (p == NULL)
        return;
    reverse (p->next);          // recursive call . we will go till last node
    printf("%d ", p->data);     // and the print will print from last to first
    
}
void not_reverse (struct Node *head)   
{
    struct Node *p = head;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
struct Node *insert (struct Node **head , int data)   
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
    return *head;
}
void main ()
{

    struct Node *head = NULL;                   // Created head locally this time
    head = insert (&head,10);                          // passing address of head
    head = insert (&head,20);
    head = insert (&head,30);   // as head is local to main, we need to pass its address,
    //                      if we dont then its value will remain unchanged IN MAIN
    printf("list : ");
    not_reverse(head);
    printf("\nreversed : ");
    reverse(head);
    printf("\n");
}