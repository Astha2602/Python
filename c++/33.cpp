#include<iostream>
using namespace std;
class classb;
class classa
{
    public:
    classa(): numa(12) {}
    private:
    int numa;
    friend classb;
};
class classb
{
    public:
    classb():numb(1) {}
    int add()
    {
        classa objecta;
        return objecta.numa +numb;
    }
    private:
    int numb;
   
};

int main()
{
   
    classb objectb;
    cout<<"sum:"<<objectb.add();
    return 0;
}
