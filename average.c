/*
Author: Shubham Mehetre
Purpose: Average of 10 nos 
Date: Started on December 10, 2020
*/
#include<stdio.h>

void main(){
    int arr1[10] = {};
    int sum = 0;
    printf("Enter 10 numbers :\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%2u>", i+1);
        scanf("%d",&arr1[i]);
        sum += arr1[i];
        //printf("\n");
    }
    printf("Average of above 10 nos is : %.2f", (float)sum/10);
}