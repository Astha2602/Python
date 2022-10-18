#include<iostream>
using namespace std;
class a
{
    friend class b;
    int a;
};
class b{ };
class c:public b
{
    void f(a* p)
    {

    }
};
int main()
{
    return 0;
}