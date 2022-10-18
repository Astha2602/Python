
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int n=5;
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    p[i]=i+1;
    for(int i=0;i<n;i++)
    printf("%d ",p[i]);
    printf("\n");
    int *q=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    q[i]=i+1;
    for(int i=0;i<n;i++)
    printf("%d ",q[i]);
    printf("\n");
    n=10;
    q=realloc(q,n*sizeof(int));
    for(int i=5;i<n;i++)
    q[i]=i+1;
    for(int i=0;i<n;i++)
    printf("%d ",q[i]);
    return 0;
}