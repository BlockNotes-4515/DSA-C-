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
    void add(Example Ea, Example Eb)
    {
        Example Ec;
        Ec.a=Ea.a+Eb.a;

       
    }
};
int main()
{
    Example E1,E2,E3;
    E1.a=10;
    E2.a=100;
    E3.a=120;
    cout<<"\n------------------------------> Initaial Values!"<<endl;
    cout<<"\n 1. Values of the First Object: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Object: "<<E2.a<<endl;
    cout<<"\n 3. Values of the Third Object: "<<E3.a<<endl;

    E3.a=E1.a+E2.a;
    cout<<"\n------------------------------> Updated Values!"<<endl;
    cout<<"\n 1. Values of the First Object: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Object: "<<E2.a<<endl;
    cout<<"\n 3. Values of the Third Object: "<<E3.a<<endl;

    return 0;
}*/
/*class Example
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

    E1.a=100;
    E2.a=50;
    cout<<"\n---------------------------> Initial Values!"<<endl;
    cout<<"\n 1. Values of the First Objects: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Objects: "<<E2.a<<endl;

    E2.add(E1);
    cout<<"\n---------------------------> Updated Values!"<<endl;
    cout<<"\n 1. Values of the First Objects: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Objects: "<<E2.a<<endl; 

    return 0;
}*/
class Example
{
    public:
    int a;

    public:
    void add(Example Ea,Example Eb)  //Using an Class Object as an Functional Arguments!.
    {
        Example Ec;
        Ec.a=Ea.a+Eb.a;

    }
};
int main()
{
    Example E1,E2,E3;

    E1.a=100;
    E2.a=50;
    E3.a=0;
    cout<<"\n-------------------------> Initial Values!"<<endl;
    cout<<"\n 1. Values of the First Objects are: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Objects are: "<<E2.a<<endl;
    cout<<"\n 3. Values of the Third Objects are: "<<E3.a<<endl;

    E3.a=E1.a+E2.a;
    cout<<"\n-------------------------> Updated Values!"<<endl;
    cout<<"\n 1. Values of the First Objects are: "<<E1.a<<endl;
    cout<<"\n 2. Values of the Second Objects are: "<<E2.a<<endl;
    cout<<"\n 3. Values of the Third Objects are: "<<E3.a<<endl;

    return 0;
}