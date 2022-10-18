#include<iostream>
using namespace std;
typedef class
{
    int i;
    public:
    void setdata(int i)
    {
        this->i=i;
    }
    void print()
    {
        cout<<"value of i:"<<this->i<<endl;
    }
}myclass;
class A:public myclass
{
    public:
    A()
    {
        setdata(20);
        print();
    }
};
int main()
{
    myclass obj1,obj2;
    obj1.setdata(10);
    obj1.print();
    obj2.setdata(100);
    obj2.print();
    A a;
}