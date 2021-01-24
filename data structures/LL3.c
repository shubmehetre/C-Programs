// Insert Node nth position
#include<stdio.h>
#include<stdlib.h>

// All the function signatures
void insert (int , int);
void print();
void delete(int);

// node
struct Node 
{
    int data;
    struct Node *next;
};

//Pointer to head of node
struct Node *head;

int main ()
{
    // initializing head to NULL
    head =  NULL;
    // Adding random values at random position
    insert (10,1);  //10
    insert (70,2);  //10 70
    insert (30,3);  //10 70 30
    insert (55,2);  //10 55 70 30
    insert (25,1);  //25 10 55 70 30
    print();
    //Deleting nodes at nth position
    printf("\nWhich position u wanna delete :  ");
    int n;
    scanf("%d",&n);
    delete(n);
    print();    
    printf("Done\n");
}

void insert (int data, int n)
{
    struct Node *temp1 = (struct Node *) malloc (sizeof(struct Node));          // dynamic block created to store the new Node

    temp1->data = data;             // Storing data in the new temp1 node
    temp1->next = NULL;             // the new temp1 node currently its pointing to nothing

    if (n == 1)                     // if we wnaa insert at 1st position
    {
        temp1->next = head;         // head is pointing to something. placing temp1 in between them. so wat head was pointing to , now temp->next has that address              
        head = temp1;               // And head now has temp1's address
        return ;                    // finish program
    }
    // if insert at position > 1
    struct Node *temp2 = head;      // Pointer initially posing as head, used to travese through LL, to reach (n-1)th node.....n is ofcourse the position at which new node is to be inserted
    for (int i = 0; i < n-2 ; i++)
    {
        temp2 = temp2->next;        // Traversing ...
    }

    temp1->next = temp2->next;      // BEFORE - [temp2][third_node] here temp2->next store address of third_node.... so we do temp1->next = temp2->next....so that temp1 stores
                                    // address of third_node ..
    temp2->next = temp1;            // address of temp1 stored in temp2->next ....SO WE GET [temp2] [temp1] [third_node]
    
}

void print()
{
        struct Node *temp;                  // clone of head created to traverse the LL
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);          // Printing...
            temp = temp->next;
            /* code */
        }
        printf("\n");
}

void delete (int n)
{
    struct Node *temp1 = head;              // head pointer dupplicate 

    if (n == 1)                       // If we wanna remove 1st element
    {// 2nd element address storing in head 
        head = temp1->next;            // i.e (*temp1).next i.e. pointer part of 1st node
     // then deleting 1st element
        free(temp1);
        return;
    }
   // for n>1 
    for(int i = 0; i < n-2; i++)            // Going to n-2 using temp1
    {
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;       // Creating a pointer to the node that is to be deleted
    temp1->next = temp2->next;              // temp2->next is address of node after the node that is to be deleted....we store that in temp1-> which is node before the node 
                                            // that is to be deleted...in this way link to wannabe deleted node is deleted....hence node is deleted from LL but not from memory
    free(temp2);                            // clearing memory occupied by the node that was deleted from LL...hence completly deleted from memory as well

}













