 /*
Author: Shubham Mehetre
Purpose: Calculate weekly pay (if-else exercise) 
Date: December 16, 2020
*/
 
 #include<stdio.h>

 void main (){
     int total_hours = 0;
     int base_hours = 0;
     int base_pay = 0;
     int gross = 0;
     float taxes = 0;
     float net_pay = 0;
     int excess_over_base_hours = 0;
     int excess_over_base_pay = 0;
     float slab_15percent = 0;
     float slab_20percent = 0;
     float slab_25percent = 0;

     printf("Enter the number of hours worked : ");
     scanf("%d", &total_hours);

    if (total_hours > 40)
    {
        base_pay = 40 * 12;
        excess_over_base_hours = total_hours - 40;
        excess_over_base_pay = excess_over_base_hours * 18;
        gross = base_pay + excess_over_base_pay;

    }
    else
    {
        base_pay = total_hours * 12;
        gross = base_pay;
    }
    printf("\ngross pay : $%d",gross); // Gross calculated

    // Taxes 
    if (gross < 300)
        printf("\nViola! No taxes for you.");
    else
    {
        if (gross > 300)
    {
        slab_15percent = 300 * 0.15;
        slab_20percent = (gross - 300) * 0.20;

        if (gross - 450 > 0)
        slab_25percent = (gross - 450) * 0.25;
        
        taxes = slab_15percent + slab_20percent + slab_25percent ;
        net_pay = gross-taxes;
        
        printf("\nYour taxes $%.2f", taxes);
        printf("\nYour net income :$ %.2f", net_pay);
    }
        else
        {
            printf("error!!");
        }
           
    }
      
   
 }