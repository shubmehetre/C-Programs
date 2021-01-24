/*
Author: Shubham Mehetre
Purpose: Average of 10 nos 
Date: Started on December 10, 2020
*/
#include<stdio.h>
#include<stdio.h>


int main(){
    int arr1[10] = {0};
    int sum = 0;
    printf("Enter 10 numbers pls:\n");
    
    
        for (int i = 0; i < 10; i++)
        {    
            printf("%d>", i+1);
            scanf("%d",&arr1[i]);
            
            if(arr1[i] % 1 == 0)
            {
                sum += arr1[i];
            }
            else
            {
                printf("Enter a number u stupid fuck\n");
                return 0;
            }
            
        }
    printf("\nAverage is %d\n", sum/10);   
    
    return 0;
}