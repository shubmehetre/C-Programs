#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SLEN 20
struct namect
{
    char *fname;
    char *lname;
};

void getAndPutinfo (struct namect *pst)
{
    char store[SLEN];

    pst->fname = (char*)malloc(SLEN + 1);
    printf("ENTER fname\n");
    fgets(pst->fname);
    printf("You entered \n");
    puts(pst->fname);

    pst->lname = (char*)malloc(SLEN + 1);
    printf("ENTER lname\n");
    fgets(pst->lname);
    printf("You entered \n");
    puts(pst->lname);

}

int main(void)
{
    struct namect var1;
    struct namect *ptr1;
    ptr1 = &var1;

    getAndPutinfo(ptr1);
}