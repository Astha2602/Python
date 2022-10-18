#include<iostream>
using namespace std;
void multiply(int a ,int b)
{
    cout<<"a*b="<<a*b<<endl;
}
void multiply(double a ,double b)
{
    cout<<"a*b="<<a*b<<endl;
}
void multiply(int a ,double b)
{
    cout<<"a*b="<<a*b<<endl;
}
void multiply(double a ,int b)
{
    cout<<"a*b="<<a*b<<endl;
}
int main()
{
    multiply(2,3);
    multiply(2.01,3.01);
    multiply(2,3.01);
}