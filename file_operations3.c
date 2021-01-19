#include<stdio.h>

int main (void)
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen ("myfile", "w+");

    if(fp != NULL)
    fputs("helo there, how are u", fp);

    rewind (fp);

}