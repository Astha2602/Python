#include<iostream>
#include<exception>
using namespace std;
struct myexception:public exception
{
    const char * what () const throw()
    {
        return "c++ exception";
    }
};
int main()
{
    try
    {
        throw myexception();
    }
    catch(myexception& e) {

        cout<<"MyException caught "<<endl;

        cout<<e.what()<<endl;

    } catch(exception& e) {

        cout<<"others \n";

    }

}
