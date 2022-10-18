#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter size of each array"<<endl;
    cin>>n;
    int a[n],b[n],c[n][n];
    cout<<"enter elements of first array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
     cout<<"enter elements of second array"<<endl;
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            c[i][j]=a[i]*b[j];
    }
    cout<<"multiplied elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            c[i][j]=a[i]+b[j];
    }
    cout<<"added elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            c[i][j]=a[i]-b[j];

    }
    cout<<"subtracted elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;

    
}