#include<iostream>
using namespace std;
namespace add
{
    namespace sub
    {
        int operation(int x,int y)
        {
            return x-y;
        }
    }
    int operation()
    {
        int x,y;
        cin>>x>>y;
        cout<<"subtraction="<<sub::operation(x,y)<<endl;
        return x+y;
    }
}
namespace mul
{
    int operation()
    {
        int x,y;
        cin>>x>>y;
        return x*y;
    }
}
int main()
{
    cout<<add::operation()<<"=addition"<<'\n';
   // cout<<"subtraction="<<sub::operation()<<'\n';
     cout<<"multiplication="<<mul::operation()<<'\n';
     
     return 0;

}

