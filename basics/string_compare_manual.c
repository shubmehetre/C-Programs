#include<stdio.h>
//#include "absolute_value.c"
#include<string.h>


//float absoluteValue(float);

void main ()
{
    char name1[25]; 
    char name2[25];
    int flag = 0;
    int i = 0;

    printf("Enter name 1 : \n");
    scanf("%s", name1); 

    printf("Enter name 2 : \n");
    scanf("%s", name2); 
 
    while (name1[i] != '\0' && name2[i] != '\0')
    {
        if (name1[i] == name2[i])
        {
            flag = 1;
        }
        i++;
    }

    if (flag = 1 && name1[i]=='\0' && name2[i]=='\0')
        printf("\nSAME");
    else
    {
        printf("\nNOT SAME");
    }   
}