#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAXLEN 40

int main() 
{
    char c;
    char s[MAXLEN];
    char sen[MAXLEN];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c", &c);
    scanf("%s", s);
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;   
}