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
obj1,obj2;
int main()
{
    cout<<"object1 \n";
    obj1.setdata(10);
    obj1.printvalues();
    cout<<"object2 \n";
    obj2.setdata(12);
    obj2.printvalues();
    return 0;
}