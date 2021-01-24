#include<stdio.h>
#include<stdlib.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
   
};

void readItem (struct item *readPtr)
{
    printf("Enter product name\n");
    scanf("%s", readPtr->itemName);

    printf("Enter quantity\n");
    scanf("%d", &readPtr->quantity);
}

void printItem (struct item *printPtr)
{
    printf("\nName of product: %s", printPtr->itemName);
    printf("\nQunatity is %d\n", printPtr->quantity);
}


int main(void)
{
    struct item i1;
    struct item *ptr;
    ptr = &i1;

    ptr->itemName = (char *)malloc(20*sizeof(char));        // To access pointers inside a struct
    //(*ptr).itemName = (char *) malloc (20*sizeof(char));    // Another way to access a pointer inside stuct, but doesn't look cleaner as above

    readItem(ptr);
    printItem(ptr);
}