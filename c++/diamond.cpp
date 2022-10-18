#include<iostream>
using namspace std;
class baseclass
{
    public:
        int x;
};
class class1:public baseclass
{
    public:
        int y;
};
class class2:public baseclass
{
    public:
        int z;
};
class derivedclass:public class1,public class2{};
