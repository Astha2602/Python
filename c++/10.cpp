#include<iostream>
using namespace std;
template<class a,class b>
bool are_equal(a x,b y)
{
    return(x==y);
}
int main()
{
    if(are_equal(10,11.8))
        cout<<"x&y are equal\n";
    else
        cout<<"x&y are not equal\n";
}