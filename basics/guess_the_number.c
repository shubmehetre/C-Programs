/*
Author: Shubham Mehetre
Purpose: guess the no. game (control flow exercise)
Date: December 16, 2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main (){
    //int our_num = 17;
    int guess;
    int randomNumber = 0;
    time_t t;
    srand((unsigned) time(&t));
    randomNumber = rand() % 21;

    printf("This is a guessing game [0-20]\n");
    printf("Enter a guess\n");
    scanf("%d", &guess);

    for (int i = 5 ; i > 0; i--){
        if (guess == randomNumber){
            printf("Congrats!! You Won ...");
            break;
        }
            
        else if (guess < randomNumber)
        {
            printf("Sorry %d is incorrent. Our number is more than that",guess);
            printf("\nYou have %d tr%s left",i,i==1 ? "y" : "ies");
            printf("\nEnter a guess\n");
            scanf("%d", &guess);
        }
        else if (guess > randomNumber)
        {
            printf("Sorry %d is incorrent. Our number is less than that",guess);
            printf("\nYou have %d tr%s left",i,i==1 ? "y" : "ies");
            printf("\nEnter a guess\n");
            scanf("%d", &guess);
        }
        else if (i=1)
        {
            printf("\nGAME OVER");
            /* code */
        }
        
        }
        printf("GAME OVER HAHAHAHA\n");
        
    }
