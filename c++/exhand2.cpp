#include<iostream>
#include<conio.h>
using namespace std;
void test(int x)
{
    try
    {
        if(x>0)
            throw x;
        else
            throw 'x';
    }
    catch(int x)
    {
        cout<<"catch a integer and that integer\n";
    }
    catch(char x)
    {
        cout<<"catch a character and that character\n";
    }
}
int main()
{
    cout<<"testing";
    cout<<"hi";
    test(10);
    test(0);
    getch();
}