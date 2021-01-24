#include<stdio.h>
int gcdFinder(int, int);

void main()
{
    int result = 0;
    
    result = gcdFinder(0, 15);
    printf("gcd of 0 and 15 is %d \n", result);
    result = gcdFinder(5, 15);
    printf("gcd of 5 and 15 is %d \n", result);
    result = gcdFinder(35, 25);
    printf("gcd of 35 and 25 is %d \n", result);
}


int gcdFinder (int x, int y)
{
    int temp;
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;   
}