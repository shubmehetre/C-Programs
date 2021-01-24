#include<stdio.h>

int main (void)
{
    FILE *ptr1 = NULL;
    int ch;
    ptr1 = fopen("myfile", "r");

    while ( (ch = fgetc(ptr1)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
    fclose(ptr1);
    ptr1 = NULL;

    return 0;
    //rename("./myfile2", "./myfile");
}