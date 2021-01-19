#include<stdio.h>

int main ()
{
    
    FILE *ptr = NULL;
    char strbuff[50];

    ptr = fopen("myfile", "r");
    
    if (ptr != NULL)
        fputs("asdasd", ptr);

    if(fgets(strbuff, 50, ptr) != NULL)
    {
        printf("%s", strbuff);

    }
    
    fclose(ptr);
    return 0;
}