#include<stdio.h>
struct address
{
    char city[20];
    int pin;
    char phone[14];

};
struct employee
{
    char name[20];
    struct address add;
};
void display(struct employee em);
int main()
{
    struct employee emp;
    printf("enter emp info\n");
    scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    display(emp);
    return 0;
}
void display(struct employee em)
{
    printf("printing details\n");
    printf("%s %s %d %s",em.name,em.add.city,em.add.pin,em.add.phone);
}