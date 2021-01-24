/*
Author: Shubham Mehetre
Purpose: calcute prime nos (array exercise) upto user input
Date: December 18, 2020
*/
#include<stdio.h>
#include<stdbool.h>
void printPrime(int x);
void main (){
    int num = 0;
    
    printf("Enter number upto which to print prime nos : ");
    scanf("%d", &num);
    printPrime(num);
}

void printPrime(int x)
{
    int primeIndex = 2; // on 0 and 1 will be 2 and 3...start filling prime nos in array from 3
    int primes[x];
    primes[0] = 2;
    primes[1] = 3;
    for (int i = 5; i<=x; i+=2)
    {
        bool flag = true;
        for(int j=2; j<=i-1; j++)
        {
            if (i%j==0)
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
            {
                primes[primeIndex] = i;
                primeIndex++;
            }
    }
    for (int i = 0; i<primeIndex; i++)
    {
        printf("%d  ",primes[i]);
    }
}