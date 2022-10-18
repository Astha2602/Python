#include<iostream>
using namespace std;

template<class xyz>
xyz sum(xyz a,xyz b)
{
    return a+b;
}
int abc(int x,int y)
{
    int s;
    s=x+y;
    return s;
}
int main()
{
cout<<sum<double>(1.4,2.3)<<" ";
cout<<sum<int>(1,2)<<" ";
int x=abc(2,3);
cout<<"sum is"<<x;

}