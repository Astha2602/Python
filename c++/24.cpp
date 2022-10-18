#include<iostream>
using namespace std;
class car
{
    public:
        void car1()
        {
            cout<<"output"<<endl;
        }
        virtual void start()=0;
        virtual void stop()=0;
};
class innova:public car
{
    public:
    void start()
    {
        cout<<"innova started"<<endl;
    }
    void stop()
    {
        cout<<"innova stopped"<<endl;
    }
    
};
class swift:public car
{
    public:
    void start()
    {
        cout<<"swift started"<<endl;
    }
    void stop()
    {
        cout<<"swift stopped"<<endl;
    }
};
int main()
{
    car *c=new innova();
    c->start();
    c->stop();
    c->car1();
    c=new swift();
    c->start();
    c->stop();
    return 0;
}