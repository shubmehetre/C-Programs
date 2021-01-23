// Inserting node at the beginning in a LL 
#include<stdlib.h>
#include<stdio.h>
struct Node                                         // structure to store a
{
    int data;
    struct Node *next;
};

struct Node *A;
void insert(int);
void print();

int main()
{
    A = NULL;
    int n, m;
    printf("How man nodes u want in this LL?\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &m);
        insert(m);
        print();
    }
}

void insert (int x)
{
    struct Node *temp = (struct Node *) malloc (sizeof(struct Node));
    temp->data = x;
    temp->next = A;
    A = temp;
}

void print()
{
    struct Node *temp;
    temp = A;
    printf("\nThe List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    

}