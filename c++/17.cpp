#include<iostream>
using namespace std;
class base1
{
    public:
        float salary=900;
};
class base2
{
    public:
        float bonus=100;
};
class derived:public base1,public base2
{
    public:
        void sum()
        {
            cout<<"your total salary is"<<(salary+bonus);
        }

};
int main()
{
    derived x;
    x.sum();
    
}