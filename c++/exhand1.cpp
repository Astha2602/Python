#include<iostream>
using namespace std;
int main()
{
    int a=0;
    cout<<"simple c++ program for catch & throw\n";
    try
    {
        if(a==0)
            throw a;
    }
    catch(float ex)
    {
        cout<<"float exception catch:value"<<endl;
    }

    catch(...)
    {
        cout<<"default exception"<<endl;
    }
    return 0;
}