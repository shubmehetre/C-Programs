#include <stdio.h>
#include <string.h>

int main(void)
{
    int a = 10;
    int *ptoa = &a;
    int arr1[] = {1,2,3,4,5};
    int *ptoarr1 = arr1;

    for (int i = 0; i<5; i++)
    {
        printf("%d ", *ptoarr1);
        ptoarr1 += 1;
    }
    // printf ("%d ", arr1);
    // printf ("%d ", ptoarr1);
    // printf ("%d ", arr1[0]);
    // printf ("%d ", *(ptoarr1+4));
    // printf ("%d ", ptoarr1+1);
    
    //printf("%d", *ptoa + 10);
}