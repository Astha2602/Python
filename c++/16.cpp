#include<iostream>
using namespace std;
class base
{
    public:
        float salary=900;
};
class derived:public base
{
    public:
        float bonus=100;
        void sum()
        {
            cout<<"your total salary is"<<(salary+bonus);
        }
};
int main()
{
    derived x;
    cout<<"your salary is"<<x.salary<<endl;
    cout<<"your bonus is"<<x.bonus<<endl;
    x.sum();
    return 0;
}