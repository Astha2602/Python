#include<iostream>
using namespace std;
struct a
{
    virtual void f()
    {
        cout<<"class a"<<endl;
    }
};
struct b:a
{
    void f()
    {
        cout<<"class b"<<endl;
    }
};
void g(a& arg)
{
    arg.f();
}
int main()
{
    b x;
    g(x);
}
