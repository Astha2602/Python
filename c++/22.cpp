#include<iostream>
using namespace std;
class baseclass
{
    public:
        int x;
};
class class1:public baseclass
{
    public:
        int y;
};
class class2:public baseclass
{
    public:
        int z;
};
class derivedclass:public class1,public class2
{
    public:
        int sum;
};
int main()
{
    derivedclass obj;
    obj.class1::x=10;
    obj.y=20;
    obj.z=30;
    cout<<"the sum is"<<obj.sum<<"\n\n";
    return 0;
}