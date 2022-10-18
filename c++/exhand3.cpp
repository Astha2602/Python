#include<iostream>
using namespace std;
int main()
{
    int v=0;
    cout<<"simple program\n";
    try
    {
        exceptionfunction();
    }
    catch(int x)
    {
        cout<<"wrong input\n"<<x;
    }
}