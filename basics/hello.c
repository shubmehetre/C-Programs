#include<stdio.h>
#include<stdlib.h>
void my_fun(char *);

int main ()
{
   char str1[50];
   char str2[50];
   char str3[50];
   char *ptr1;
   ptr1 = str1;
   scanf("%s",str1);
   my_fun(ptr1);
   

}

void my_fun(char *str1)
{
   char *arr_pointer;

   for (arr_pointer = str1; *arr_pointer != '\0'; arr_pointer++)
   {
      if(*arr_pointer == 'a' || *arr_pointer == 'e' || *arr_pointer == 'i' || *arr_pointer == 'o' || *arr_pointer == 'u' )
         *arr_pointer = '%';
   }
   puts(str1);
}