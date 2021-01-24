#include<stdlib.h>
#include <stdio.h>
#include<string.h>

char *PrintHello (char *name)
{
    printf("Hello %s\n", name);
    return "hello returned";
}
int main()
{
    char store[50] = "sam";
    char *ptr = PrintHello(store);

    for(int i = 0; i < strlen(ptr) ; i ++)
    {
        printf("%c", *(ptr+i));
    }
    printf("\n");
}