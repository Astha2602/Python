#include<stdio.h>
int addition()
{
    int a,b;
    printf("entr 2 nos");
    scanf("%d %d",&a,&b);
    return a+b;
}
int main()
{
    int result;
    int(*ptr)();
    ptr=&addition;
    result=(*ptr)();
    printf("the sum is %d",result);

}
