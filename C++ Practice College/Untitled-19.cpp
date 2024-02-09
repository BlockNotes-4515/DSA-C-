#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int a,b,c;

    cout<<"\n--------------------Finding the Three Largest Numbers!----------------\n";

    cout<<"\n 1. Enter the Value First Number of a: ";
    cin>>a;
    cout<<"\n 2. Enter the value Second Number of b: ";
    cin>>b;
    cout<<"\n 3. Enter the Third Number: ";
    cin>>c;
    //Using the Nested-if-else statement we uses three numbers Largest.
    if(a>0 && b>0 && c>0)
    {
    if(a>b && a>c)
    {
        cout<<"\n -->The Value of First Number a: "<<a<<" is greatest than b: "<<b<<" and "<<c<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"\n -->The values of Second Number b: "<<b<<" is greater than a: "<<a<<" and "<<c<<endl;
    }
    else
    {
        cout<<"\n -->The Values of Third Number c: "<<c<<" is greater than a: "<<a<<" and "<<c<<endl;
    }
    }
    return 0;
}