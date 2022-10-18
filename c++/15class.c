#include<iostream>
using namespace std;
class abc
{
    public:
     string x;
    void print()
    {
        cout<<"name is"<<x;
    }
};
int main()
{
    abc a;
    a.x="astha";
    a.print();
    return 0;
}