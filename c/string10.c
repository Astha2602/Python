#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="this is astha";
    char *sub;
    sub=strstr(str,"astha");
    printf("\nSubstring is:%s",sub);
    return 0;
}