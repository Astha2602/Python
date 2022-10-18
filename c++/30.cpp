#include<iostream>
using namespace std;
class a
{
    private:
    class b
    {};
    b*z;
    class c:private b
    {
        private:
            b y;
            c *x;
    };
};
int main()
{}