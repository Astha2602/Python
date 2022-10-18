#include<iostream>
using namespace std;
class baseclass
{
    public:
        void print()
        {
            cout<<"this is an eg of multilevel inheritance";
        }
};
class derivedclass:public baseclass{};

class derivedclass2:public derivedclass{};
int main()
{
    derivedclass2 obj;
    obj.print();
    return 0;

}
   