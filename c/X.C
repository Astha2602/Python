#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("\nFile doesnt exist");
    }
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)
        {
            break;
        }
        printf("%c",c);
        return 0;
    }
}