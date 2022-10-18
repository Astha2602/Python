#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workerno;
}ujob;
struct structjob
{
    char name[32];
    float salary;
    int workerno;
}sjob;
int main()
{
    printf("size of union=%d bytes",sizeof(ujob));
    printf("\nsize of structure=%d bytes",sizeof(sjob));
    return 0;
}