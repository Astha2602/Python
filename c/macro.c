#include<stdio.h>
#define area
#if !defined(area) && !defined(area)

#endif
int main()
{
    #ifdef area
    printf("this is circle area program");
    float r=0;
    fflush(stdout);
    printf("enter radius");
    fflush(stdout);
    scanf("%f",&r);
    printf("area of circle=%f\n",(3.14 *r));
    fflush(stdout);
    #endif
}