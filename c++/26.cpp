#include<iostream>
using namespace std;
class parent
{
    public:
    parent()
    {
        cout<<"parent class"<<endl;
    }
     void print()
    {
        cout<<"parent"<<endl;
    }
   virtual ~ parent()
    {
        cout<<"parent des"<<endl;
    }
};
class child:public parent
{
    public:
    child()
    {
        cout<<"child"<<endl;
    }
    ~child()
    {
        cout<<"child des"<<endl;
    }
};
class child2:public child
{
    public:
    child2()
    {
        cout<<"child2"<<endl;
    }
    ~child2()
    {
        cout<<"child2 des"<<endl;
    }
};
int main()
{
    parent *p=new child2() ;
    delete p;

    return 0;
}