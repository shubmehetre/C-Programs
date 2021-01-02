#include <stdio.h>
#include <string.h>
void printArr(int *);

int main(void)
{
    int arr1[] = {1,2,3,4,5};
    int *ptoarr1 = arr1;

    printArr(ptoarr1);
    return 0;
}
void printArr (int *ptoarr1)
{
    for (int i = 0; i<5; i++)
    {
        printf("%d ", *ptoarr1);
        ptoarr1 += 1;
    }
}