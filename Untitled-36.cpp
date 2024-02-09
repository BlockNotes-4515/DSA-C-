#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//Declaring of Member Function Outside the Class.

class test
{
    public:  //Acess Modifiers.
    int id;                                 //Data Members.
    string name;

    void print_id()                         //Member Functions.
    {
        cout<<"\n 1. Your ID: "<<id<<endl;
    }
    void print_name();
};
class test::print_name()
{
    cout<<"\n 2. Your Name: "<<name<<endl;   //Outside the Class Member Declared!
};
int main()
{
    test t1;
    t1.id=20;
    t1.name="Dhruv";
    t1.print_id();
    t1.print_name();

    return 0;
}