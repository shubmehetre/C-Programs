#include <stdio.h>
#include <string.h>

void main ()
{
    int arr[1] = {1};
    int x =10;
    char a = 'A';
    int *ptr1 = arr;

    printf("%d", sizeof(arr));
    printf("\n%d", sizeof(x));
    printf("\n%d", sizeof(a));
    printf("\n%d", *ptr1);

}