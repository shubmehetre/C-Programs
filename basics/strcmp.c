#include<stdio.h>
#include<stdbool.h>
bool strcomp (char a[], char b[]);

void main ()
{
    char src[50] = "apple";
    char dest[50] = "asdapple";
    bool result;
    result = strcomp(src, dest);
    if (result == true)
    {
        /* code */
        printf("\nsame");
    }
    else
    {
        printf("\nnot same");
    }
    
}

bool strcomp (char a[], char b[])
{
    int count = 0;
    int flag = 0;
    bool checker;

    while (a[count] != '\0' && b[count] != '\0')
    {
        if(a[count] != b[count])
            flag = 1;
        count++;
    }

    if (flag == 0)
        checker = true;
    else
        checker = false;
    
    return checker;
}