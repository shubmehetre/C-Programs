#include<stdio.h>
#include<stdlib.h>

int main ()
{
   char str1[50];
   char str2[50];
   char str3[50];
   
   scanf("%s",str1);
   for (int i = 0; str1[i] != '\0'; i++)
   {
      if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' )
         str1[i] = '%';
   }
   puts(str1);
}