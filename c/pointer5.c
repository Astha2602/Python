#include<stdio.h>
int main()
{
    char *str;
    {
        char a='A';
        str=&a;
    }
    printf("%c",*str);
    return 0;
}