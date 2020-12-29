#include<stdio.h>
#include<string.h>
#define RESULT_LEN 100
void string_reverse(const char []);

void main()
{
    string_reverse("shubham mehetre");
}

void string_reverse(const char a[])
{
    int strLength = 0;
    int i = 0;
    int count = 0;
    char result[RESULT_LEN];

    /******************************************************
     Calculating length:
    ******************************************************/
    while(a[strLength] != '\0')
        strLength++;
 
    printf("\nstring len is %d\n", strLength);
    printf("\n"); 
    
    /******************************************************
     Directly Printing :
    ******************************************************/    
    for (int i = strLength -1; i >= 0; i--)           
      printf("%c", a[i]);   

    printf("\n");                       

    /******************************************************
     Storing in array then printing :
    ******************************************************/
    for (int i = strLength - 1; i >= 0; i--)
    {
      
      result[count++] = a[i];
    }
    result[strLength] = '\0';
    printf("\n%s", result);
    
}