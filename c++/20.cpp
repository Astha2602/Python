#include<iostream>
using namespace std;
class world
{
    public:
        world()
        {
            cout<<"this is world\n";
        }
};
class continent:public world
{
    public:
        continent()
        {
            cout<<"this is continent\n";
        }
};
class country
{
    public:
        country()
        {
            cout<<"this is country\n";
        }

};
class india:public continent,public country
{
    public:
        india()
        {
            cout<<"this is india";
        }
};
int main()
{
    india myworld;
}