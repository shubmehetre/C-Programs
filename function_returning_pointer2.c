#include <stdio.h>
#include<stdlib.h>
int *Add (int *a, int *b)
{
    int num ;
    int *c;
    c = &num;
    num = (*a)+(*b);
    return c;                // or return c will also work
}
void main ()
{
    int a = 2;
    int b = 3;
    int *ptr = Add(&a,&b);       // Declaration of function pointer 
    printf("Sum is = %d\n",*ptr);
}