#include<iostream>
using namespace std;
class classb;
class classa
{
    public:
    classa(): numa(12) {}
    private:
    int numa;
    friend int add(classa,classb);
};
class classb
{
    public:
    classb():numb(1) {}
    private:
    int numb;
    friend int add(classa,classb);
};
int add(classa objecta,classb objectb)
{
    return (objecta.numa+objectb.numb);
}
int main()
{
    classa objecta;
    classb objectb;
    cout<<"sum:"<<add(objecta,objectb);
    return 0;
}
