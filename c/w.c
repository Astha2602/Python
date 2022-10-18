#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("C:/Users/singhast/Documents/CPROGRAMMING/test.txt","w+");
    fprintf(fp,"hi my name is astha..\n");
    fputs("hello everyone..\n",fp);
    fclose(fp);
}