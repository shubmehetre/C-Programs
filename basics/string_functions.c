#include<stdio.h>
#include<string.h>
#define BUFF_LIMIT 100
void test_ternery();

void main ()
{
    char buff[BUFF_LIMIT]={};
    int digits = 0;
    int letters = 0;
    int puntuation = 0;
    int i = 0;

    printf("Enter a string less that %d characters\n", BUFF_LIMIT );
    scanf("%s", buff);
    
    while (buff[i] != '\0')
    {
        if(isalpha(buff[i]))
            ++letters;
        else if (isdigit(buff[i]))
            ++digits;
        else if (ispunct(buff[i]))
            ++puntuation;
        i++;
    }
    printf("\nYour sting contains %d letters , %d digits, %d symbols", letters, digits, puntuation);

    test_ternery();
}

void test_ternery ()
{
    int i = 10;
    
    i = 10 ? printf("\n1") : printf("\n2");
}