#include<iostream>
using namespace std;
int a;
void f()
{
    class te1
    {
        public:
        te1()
        {
            cout<<"t1::t2"<<endl;
        }
        void t3()
        {
            cout<<"test 3"<<endl;
        }
    };
    class t2
    {
        public:
        void m()
        {
            cout<<"x="<<a<<endl;
            te1 t1;
            t1.t3();
        }
    };
    t2 t;
    t.m();
}
int main()
{
    f();
    return 0;
}