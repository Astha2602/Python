#include<iostream>
using namespace std;
int x;
int *p;
void f()
{
    static int y=10;
    p=&y;
    int x;
    extern int g();
    class local
    {
        int h() {return y;}
        //int p(){return x;}
        int g() {return ::x;}
        int l() {return g();}
    };
}
int main()
{
    f();
    std::cout<<*p;
    return 0;
}