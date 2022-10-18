#include<stdio.h>
int main()
{
    int *pc,c;
    printf("address of c:%p\n",&c);
    printf("value of c:%d\n\n",c);
    pc=&c;
    printf("address of pointer pc:%p\n",pc);
    printf("content of pointer pc:%d\n\n",*pc);
    c=11;
    printf("address of pointer pc:%p\n",pc);
     printf("content of pointer pc:%d\n\n",*pc);
     *pc=2;
     printf("address of c:%p\n",&c);
     printf("value of c:%d\n\n",c);
     return 0;
}