/*
Author: Shubham Mehetre
Purpose: Practising C 
Date: Started on December 10, 2020
*/

#include<stdio.h>
#include<stdbool.h>
enum week{Mon=1, Tue, Wed, Thur, Fri, Sat, Sun};
int main(){
    
    enum week day = Mon;
    int i =1;
    if( (i == day)){
        printf("its true");
    }
    else
    {
        printf("its false");
    }
    
    
    return 0;
}