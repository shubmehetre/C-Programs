#include<stdio.h>
#include<string.h>
void main ()
{
    void arraySum(int *, int );
    int arrStore[] = {1,2,3,4,5,6,7,8,9,10};
    int arr[] = {2,4,6,8,9,4};//6 elements
    printf("Size of int array:%d \n",sizeof(arr)/sizeof(arr[0]));
    int n = sizeof(arrStore)/sizeof(arrStore[0]);
    printf("\nSize of arrStore is %d", n);
    arraySum(arrStore, n);

    
}

/**************************************************************
 arrStore = arrStore[0] 
 *x = 
**************************************************************/
void arraySum(int *x, int num)
{
    int *lastPointer = x + num;
    int *startPointrr = NULL;
    int sum = 0;
    for (startPointrr = x; startPointrr < lastPointer; startPointrr++)
    {
        sum += *startPointrr;
    }
    printf("\nSum of all elements in arrStore is %d", sum);
}