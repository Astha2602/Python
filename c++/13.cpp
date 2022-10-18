#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
void swap1(int a,int b)
{
    int t=a;
     a=b;
     b=t;
}
void swap2(int *a,int *b)
{
    int t=*a;
     *a=*b;
     *b=t;
}
int main()
{
    int a=2,b=8;
    cout<<"values before swap "<<a<<b<<endl;
    //call by reference
    swap(a,b);
     cout<<"values after swap "<<a<<b<<endl;
     //call by value
    swap1(a,b);
     cout<<"values after swap "<<a<<b<<endl;
      //call by pointer
     swap2(&a,&b);
     cout<<"values after swap  "<<a<<b<<endl;

}
