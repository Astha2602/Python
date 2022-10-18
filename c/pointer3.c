#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int *)malloc(sizeof(int));
    int a=560;
    ptr=&a;
    free(ptr);
    ptr=NULL;
    return 0;

}