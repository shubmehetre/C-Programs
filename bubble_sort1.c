#include<string.h>
#include<stdio.h>
#define ARRAY_SIZE( array ) ( sizeof( array ) / sizeof( array[0] ) )

void bubbleSort ( int a[], int len);

void main()
{
    int arr[] = {1,45,6,4,2,7,23,56,344, 3,3};
    bubbleSort(arr, ARRAY_SIZE(arr));
}

void bubbleSort ( int a[] , int len)
{
    int temp = 0;
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
    printf("\n\n");
   for (int i = 0; i < len; i++)
   {
       printf("%d ", a[i]);
   }
}