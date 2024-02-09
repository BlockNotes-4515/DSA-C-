#include<iostream>
#include<iomanip>
#define MACRO (a,b,c)
using namespace std;
int main()
{int a,b,c;

    cout<<"\n 1. Enter the values of a: ";
    cin>>a;

    cout<<"\n 2. Enter the Values of b: ";
    cin>>b;

    cout<<"\n 3. Enter the values of c: ";
    cin>>c;

    cout<<"\n 4. We, gt three different values are a: "<<a<<" b: "<<b<<" and c: "<<c<<endl;
    if(a>b && a>c)
    {
        cout<<"\n --> The values of "<<a<<" is greater than "<<b<<" and "<<c<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"\n --> The values of "<<b<<" is greater than "<<a<<" and "<<c<<endl;
    }
    else
    {
        cout<<"\n --> The values of "<<c<<" is greater than "<<a<<" and "<<b<<endl;
    }
    return 0;
}
