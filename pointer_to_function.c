#include<stdlib.h>
#include <stdio.h>
#include<string.h>
int Add (int a, int b)
{
    return a+b;
}
void main ()
{
    int c = 0;
    int (*ptr)(int,int);         // Declaration of function pointer 
    ptr = &Add;                  // Or ptr = Add;

    c = (*ptr)(5,5);             // To dereference we can also do ===>  c = ptr(5,5);
    //ptr(5,5);                  // calling func
    printf("%d\n",c);
}