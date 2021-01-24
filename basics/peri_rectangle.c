/*
Author: Shubham Mehetre
Purpose: Caculate areaa and perimeter of triangle 
Date: December 15, 2020
*/

#include<stdio.h>

int main(){
    printf("Program to calculate perimeter and area of a rectangel\n\n");  //title
    
    int l,b,peri=0,area=0;  //declaring variables
    
    /*
        code below
    */
    printf("Enter length and breadth of the rectangle : \n");
    scanf("%d%d",&l,&b);

    // Perimeter 
    peri = 2*(l+b);
    printf("Perimeter is : %d",peri);

    //Area
    area = l*b;
    printf("\nArea is : %d",area);
}