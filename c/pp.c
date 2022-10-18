#include<stdio.h>



int add(){

    int x,y;

    printf("2 numbers- ");

    scanf("%d %d",&x,&y);

    return x+y;

}



int sub(int c){

    int y;

    printf("\nsubtraction- ");

    scanf("%d",&y);

    return c-y;

}



int main(){

    int c;

    int (*pt)();    //fn ptr

    pt=&add;

    c=(*pt)();

    printf("\nSum- %d",c);

    pt=&sub;

    c=(*pt)(c);

    printf("\nagain sub- %d",c);

    return 0;

}