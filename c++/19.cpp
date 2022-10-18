#include<iostream>
using namespace std;
class singlebaseclass
{
    public:
        int x,y;
        void data()
        {
            cout<<"\nenter value of x&y->\n";
            cin>>x>>y;
        }
};
class derived1:public singlebaseclass
{
    public:
        void product()
        {
            cout<<"\nthe product is="<<x*y;
        }
};
class derived2:public singlebaseclass
{
    public:
        void sum()
        {
            cout<<"\nthe sum is="<<x+y;
        }
};
int main()
{
    derived1 obj1;
    derived2 obj2;
    obj1.data();
    obj1.product();
    obj2.data();
    obj2.sum();
    return 0;
}