#include<iostream>
using namespace std;
bool candrive(int &x)
{
    if(x<18)
    {
        cout<<"not allowed to drive"<<endl;
        x=18;
        return false;
    }
    else
    {
        cout<<" allowed to drive"<<endl;
        x=18;
        return true;
    }
}
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    candrive(age);
    cout<<age<<endl;
    return 0;
}

