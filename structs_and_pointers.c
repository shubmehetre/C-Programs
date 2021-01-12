#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date
{
    char day[10];
    char month[4]; // +1 size 'cause NULL terminator is also required here
    int year;
} sdate;

// function declared
void store_print_date(struct date *);

int main(void) // always return an integer from main()
{
    struct date *datePtr = NULL;
    datePtr = &sdate;

    store_print_date(datePtr); // Calling function
    
    return 0;
}

void store_print_date(struct date *datePtr)
{
    strcpy(datePtr->day, "Saturday"); // using strcpy()
    strcpy(datePtr->month, "Jan");    // again

    datePtr->year = 2020; // it's okay to directly assign since it's an int
    
    printf("%s\n", datePtr->day);     // successful
    printf("%s\n", datePtr->month);   // output
}