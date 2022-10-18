
#include<stdio.h>
#include<conio.h>

#include<stdlib.h>



int main()

{

    int a;

   // scanf("%d",&a);

    //printf("%d",a);

    int low,high,count;

    printf("Enter low,high,count");

    scanf("%d%d%d",&low,&high,&count);



    int i;

    for(int i=0;i<count;i++)

    {

        int num=(rand()%(high-low+1))+low;

        scanf("%d",&a);

        if(num==a)

        printf("Congratulations!, you Won");

        else

        printf("you loose ,Computer genrated number was%d\n",num);

        //printf("%d",num);

    }



}