#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
/*
class Example
{
    public:
    int a;

    public:
    void add(Example E)
    {
        a=a+E.a;
    }
};
int main()
{
    Example E1,E2;
    E1.a=50;
    E2.a=100;
    cout<<"\n ----------------------------> Initial Values!"<<endl;
    cout<<"\n 1. Values of the First Object: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Object: "<<E2.a<<endl;

    E2.add(E1);

    cout<<"\n ----------------------------> After Values!"<<endl;
    cout<<"\n 1. Values of the Object First: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Object Second: "<<E2.a<<endl;

    return 0;
}*/
class Example
{
    public:
    int a;

    public:
    void add(Example E)  //Using the Class Object as an Functional Arguments.
    {
        a=a+E.a;
    }
};
int main()
{
    Example E1,E2;

    E1.a=50;
    E2.a=100;
    cout<<"\n------------------------>Initial Values!"<<endl;
    cout<<"\n 1. Values of the First Object are: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Object are: "<<E2.a<<endl;

    E2.add(E1);
    cout<<"\n------------------------>Updates Values!"<<endl;
    cout<<"\n 1. First Object Values are given: "<<E1.a<<endl;
    cout<<"\n 2. Second Object Values are given: "<<E2.a<<endl;

    return 0;
}