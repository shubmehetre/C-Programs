#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Records 
{
    char name[20];
    char city[20];
    char phone[20];
    char *comment;    
};

struct Records *ptrRecord;

int main(int argc, char** argv)
{        
    ptrRecord = (struct Records *) malloc(2 * sizeof(struct Records));
    char name[20];

    strncpy(name, "Mickey Mouse", sizeof(name));

    strncpy(ptrRecord->name, "Minne",sizeof(ptrRecord->name));
    strcpy(ptrRecord->comment, name);
    
    printf("Name: %s\n", ptrRecord->name);
//    printf("Comment: %s\n", ptrRecord->comment);
        

    return 0;
}