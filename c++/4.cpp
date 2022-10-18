#include<iostream>
using namespace std;
namespace add
{
    int operation(int x,int y){return x+y;}

}
namespace sub
{
    int operation(int x,int y){return x-y;}

}
namespace div1
{
    int operation(int x,int y){return x/y;}

}
namespace mul
{
    int operation(int x,int y){return x*y;}

}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"addition is"<<add::operation(x,y)<<'\n';
    cout<<"subtraction is"<<sub::operation(x,y)<<'\n';
    cout<<"division is"<<div1::operation(x,y)<<'\n';
    cout<<"multiplication is"<<mul::operation(x,y)<<'\n';
    
    return 0;

}