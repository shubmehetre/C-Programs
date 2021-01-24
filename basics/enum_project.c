/*
Author: Shubham Mehetre
Purpose: Practising Enum 
Date: Started on December 13, 2020
*/

#include<stdio.h>

int main (){
    enum company {FACEBOOK, GOOGLE , XEROX, YAHOO, EBAY,MICROSOFT};
    
    
    enum company x;
    printf("Enter a company's name in caps : \n");
    scanf("%d",&x);
    
    switch (x)
    {
    case XEROX:
        printf("its Xerox");
        break;
    case FACEBOOK:
        printf("its facebook");
        break;
    case GOOGLE:
        printf("its google");
        break;
    case EBAY:
        printf("its ebay");
        break;
    case MICROSOFT:
        printf("its Microsoft");
        break;
    case YAHOO:
        printf("its yahoo");
        break;
    default:
        break;
    }
return 0;   
}