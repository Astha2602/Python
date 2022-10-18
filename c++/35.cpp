#include<iostream>
using namespace std;
void function(float)
{
    cout<<"data type:float\n";
}
void function(int)
{
    cout<<"data type:int\n";
}
int main()
{
    function(1.0f);
    function(1);
    return 0;

}