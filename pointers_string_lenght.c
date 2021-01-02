#include <stdio.h>
#include <string.h>
void lengthGiver(char *);

int main()
{
    char a[] = {"hello world"};
    char *ptr1 = a;

    lengthGiver(ptr1);
    return 0;
}
void lengthGiver(char *x)
{
    int count = 0;
    printf("%c\n", *x);
    while (*x != '\0')
    {
        count++;
        x++;
        /* code */
    }
    printf("count is %d", count);
}
