#include<iostream>
using namespace std;
class outer
{
    public:
    void fun()
    {
        i.display();
    }
    class inner
    {
        public:
        void display()
        {
            cout<<"display of inner"<<endl;
        }
    };
    inner i;
};
int main()
{
    outer::inner i;
    i.display();
    return 0;
}