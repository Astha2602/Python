#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"display of base"<<endl;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"display of derived"<<endl;
    }
};
class derived2:public base
{
    public:
    void display()
    {
        cout<<"display of derived2"<<endl;
    }
};

int main()
{
    base *p=new derived2();
    p->display();
}