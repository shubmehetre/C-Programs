#include<stdio.h>

struct pnames 
{
    char *first;
    char *second;
};

int main ()
{
    //struct names mcs = {"jay", "pac"};
    struct pnames mumble = {"69", "migos"};     // THIS IS WRONG approach, as this array will be allocated randomly  
    printf("%s\n", mumble.first);
    return 0;
}
// struct hasPtr
// {
//     int *ptr1;
//     int *ptr2;
// }structVar;

// int main(void)
// {
//     int i = 10;
//     int j;

//     structVar.ptr1 = &i;
//     structVar.ptr2 = &j;

//     *(structVar.ptr1)+=10;
//     *(structVar.ptr2) = 20;

//     printf("%d\n", *structVar.ptr1);
//     printf("%d\n", *structVar.ptr2);
// }