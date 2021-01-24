#include<stdio.h>
#define NAMELEN 20

struct employee 
{
    char name[NAMELEN];
    char hireDate[NAMELEN];
    float salary;
};

int main (void)
{
    struct employee e1;
    int a = 1;

    printf("Enter employee %d's name, hiredate, salary\n", a);
    scanf("%s", e1.name);
    scanf("\n%s", e1.hireDate);
    scanf("\n%f", &e1.salary);

    printf("\nDetails of employee %d", a);
    printf("\n%s", e1.name);
    printf("\n%s", e1.hireDate);
    printf("\n%.2f\n", e1.salary);

}