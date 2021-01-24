#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 10;
    
    char a = 'A';
    float f = 2.5;
    int *pnum = &i;
    char *ptoa = &a;
    float *ptof = &f;
    
    /********************************************************************************
    Integers
    ********************************************************************************/
    printf("\nvalue of variable : %d", i);
    printf("\naddress of variable in memory : %d, %p", &i,&i);
    printf("\nsize of variable : %d", sizeof(i));
    printf("\nvalue of pointer : %d, %p", pnum,pnum);
    printf("\naddress of pointer in memory : %p", &pnum);
    printf("\nsize of pointer : %d", sizeof(pnum));
    printf("\nsize of variable to which pointer is pointing : %d", sizeof(*pnum));

    /********************************************************************************
    Char
    ********************************************************************************/    
    printf("\n\nvalue of variable : %c", a);
    printf("\naddress of variable in memory : %d, %p", &a,&a);
    printf("\nsize of variable : %d", sizeof(a));
    printf("\nvalue of pointer : %d, %p", ptoa,ptoa);
    printf("\naddress of pointer in memory : %p", &ptoa);
    printf("\nsize of pointer : %d", sizeof(ptoa));
    printf("\nsize of variable to which pointer is pointing : %d", sizeof(*ptoa));

    /********************************************************************************
    Float
    ********************************************************************************/
    printf("\n\nvalue of variable : %f", f);
    printf("\naddress of variable in memory : %d, %p", &f,&f);
    printf("\nsize of variable : %d", sizeof(f));
    printf("\nvalue of pointer : %d, %p", ptof,ptof);
    printf("\naddress of pointer in memory : %p", &ptof);
    printf("\nsize of pointer : %d", sizeof(ptof));
    printf("\nsize of variable to which pointer is pointing : %d", sizeof(*ptof));
    return 0;
}