#include<stdio.h>

struct point{

    int x ,y;



};



int main(){

    struct point arr[10];

    struct point aa;



    arr[0].x = 10;

    arr[0].y= 20;

    aa.x = 30;

    aa.y = 40;



    printf("%d %d %d\n", arr[0].x,arr[0].y,aa.x,aa.y);

    return 0;

}