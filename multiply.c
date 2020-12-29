/*
Author: Shubham Mehetre
Purpose: multiply nos using functions
Date: December 15, 2020
*/
#include<stdio.h>
//#include "multiply.c"
int multiply (int , int);
void main()
{
    int a, b;
    printf("Enter 2 nos : \n");
    scanf("%d%d", &a, &b);
    int ans = multiply(a,b);
    printf("\nMultiplication fo above nos is : %d", ans);
}

int multiply (int , int);
int multiply (int x, int y)
{
    return (x*y);
}