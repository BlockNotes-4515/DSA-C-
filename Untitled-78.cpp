#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    string dept,join;
    int id;
    static int deskno; //Using Static Keyword one copy of all the Objects has created within the Class.

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the name of the employee: ";
        cin>>name;
        cout<<"\n 2. Enter the Department of: "<<name<<" is: ";
        cin>>dept;
        cout<<"\n 3. Enter the Joinning date of "<<name<<" is: ";
        cin>>join;
        cout<<"\n 4."<<name<<" Please! Enter the ID: ";
        cin>>id;
        cout<<"\n 5."<<name<<" Enter your Desk_Number: ";
        cin>>deskno;
    }
    void getdata()
    {
        cout<<"\n---------------------Student Details!-------------------\n"<<endl;

        cout<<"\n --> Name of an Employee: "<<name<<endl;
        cout<<"\n ---> Department of "<<name<<" is: "<<dept<<endl;
        cout<<"\n ----> Joinning Date of an Employee: "<<join<<endl;
        cout<<"\n -----> Id of "<<name<<" is: "<<id<<" and deskno: "<<deskno<<endl;
    }
};
int Employee::deskno;  /*We, use to call static Data member outside the class, we cannot use it inside the class
                        Unless we, recieve an error at the compile time, Data-Member acess the values only by with 
                        the help of scope-Resolution Operators --> (::)
                        NOTE: All, work should be done just before using the int_main() Functions only. */

int main()
{
    Employee E1;
    E1.setdata();
    E1.getdata();

    return 0;
}
