#include<stdio.h>
int fun();
int multi();
int oddeven(int n);
int main()
{
    int result;
    int (*ptr)();
    ptr=&fun;
    result=(*ptr)();
    printf("the sum is %d",result);
    ptr=&multi;
    result=(*ptr)();
    printf("multi is %d",result);
    ptr=&oddeven;
    result=(*ptr)(5);
    if(result)
    printf("is even");
    else 
    printf("is odd");
    

    return 0;
}
int fun()
{
    int a=9,b=9;
    return a+b;
}
int multi()
{
    int a=9,b=4;
    return a*b;
}
int oddeven(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}