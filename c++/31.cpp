#include<iostream>
using namespace std;

class Distance
{
    private:
    int meter;
    friend int addfive(Distance);
    public:
    Distance():meter(0) {}
};
int addfive(Distance d)
{
    d.meter+=5;
    return d.meter;
}
int main()
{
    Distance d;
    int a = addfive(d);
    cout<<"distance"<<a;
    return 0;
}