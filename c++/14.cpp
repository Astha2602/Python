#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=2,b=8;
    cout<<"before swap"<<a<<b;
    swap(&a,&b);
    cout<<"after swap"<<a<<b;
}