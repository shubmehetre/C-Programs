#include<stdio.h>
#define STR_SIZE 100

void main ()
{
    char str1[STR_SIZE];
    int count = 0;
    printf("Enter a string : ");

    scanf("%s", str1);

    while (str1[count] != '\0')
    {
        count++;
    }

    printf("Size of entered string is %d", count);
}