#include<stdio.h>
#include<string.h>

void stringCopier(int *dest, int *source);

int main ()
{
    printf("this is working");

    int arr1[10];
    int arr2[10] = {1,2,3,4,5,6,7,8,9};

    stringCopier(arr1, arr2);    
    return 0;
}

void stringCopier (int *dest, int *source)
{
    printf("\ndest before %p", dest);
    int counter = 0;
    while (*source)
    {
        *dest = *source;
        dest++; 
        source++;
        counter++;
    }
    *dest = '\0';
    printf("\ndest after %p", dest);
    dest -= (counter-1);
    while (*dest)
    {
        
    printf("\n\ntarget : %s", *dest);    /* code */
    }
    

}