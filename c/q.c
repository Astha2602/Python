#include<stdio.h>

struct address{

    char city[20];

    int pin;

    char phone[14];

};

struct employee{

    char name[20];

    struct address add;

    };

 void display();

 void main(){

    struct employee emp;

    printf("Enter Employee Information\n");

    scanf("%s %s %d %s", emp.name,emp.add.city,&emp.add.pin,emp.add.phone);

    display(emp);

 }

 void display(struct employee emp){

    printf("printing details\n");

    printf("%s %s %d %s", emp.name,emp.add.city,emp.add.pin,emp.add.phone);

 }

 