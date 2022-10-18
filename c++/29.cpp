#include<iostream>
#include<string>
using namespace std;
class poingable
{
    public:
    virtual void poing()=0;
};
void callpoing(poingable & p)
{
    p.poing();
}
class bingable
{
    public:
    virtual void bing()=0;
};
void callbing(bingable& b)
{
    b.bing();
}
class outer
{
    string name;
    class inner1;
    friend class outer::inner1;
    class inner1:public poingable
    {
        outer* parent;
        public:
        inner1(outer* p):parent(p){}
        void poing(){
            cout<<"poing called for"<<parent->name<<endl;        }
    }inner1;
    class inner2;
    friend class outer::inner2;
    class inner2:public bingable{
        outer* parent;
        public:
        inner2(outer* p):parent(p){}
        void bing(){
            cout<<"bing called for"<<parent->name<<endl;
        }
    }inner2;
    public:
    outer(const string& nm)
    : name(nm),inner1(this),inner2(this){}
    operator poingable&(){return inner1;}
    operator bingable&(){return inner2;}
};
int main()
{
    outer x("ping pong");
    callpoing(x);
    callbing(x);
}