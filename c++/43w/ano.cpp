#include<iostream>
using namespace std;
class
{
    int value;
    public:
    void setdata(int i)
    {
        this->value=i;
    }
    void printvalues()
    {
        cout<<"value:"<<this->value<<endl;
    }
}
obj1;
int main()
{
    obj1.setdata(10);
    obj1.printvalues();
    return 0;
}