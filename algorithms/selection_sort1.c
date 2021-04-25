#include <stdio.h>

void sorter (int *, int);

void main ()
{
    int arr1[] = {5,4,3,2,1};
    sorter(arr1, 5);
}

void sorter (int *x, int y)
{
    for (int i = 0; i < y-1 ; i++ )
    {
        int imin = 0;
        imin = i;

        for (int j = i+1; j<y ; j++)
        {
            if (x[j] < x[imin])
                imin = j;
        }

        int temp = 0;
        temp = x[i];
        x[i] = x[imin];
        x[imin] = temp;
    }

    for (int i = 0; i < 5 ; i++ )    
        printf("%d ",x[i]);
    printf("\n");
}