#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    int id;
    string dept;
    static int roll_no;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the name: ";
        cin>>name;
        cout<<"\n 2. Enter the Id of "<<name<<" is: ";
        cin>>id;
        cout<<"\n 3. Enter the Department in which: "<<name<<" belongs to: ";
        cin>>dept;
        cout<<"\n 4. "<<name<<" Plz, enter the roll_number here: ";
        cin>>roll_no;
    }
    void getdata()
    {
        cout<<"\n-------------------------Student Details!------------------------\n"<<endl;

        cout<<"\n --> 1. Name of the Student: "<<name<<" and its ID: "<<id<<endl;
        cout<<"\n ---> 2. Department of the Student: "<<dept<<" and its roll_number: "<<roll_no<<endl;
    }
};
int Employee::roll_no=14; //Static Data Members which is declared outside the class and acess the values by using the scope-Resolution operators.
int main()
{
    Employee E1;
    E1.setdata();
    E1.getdata();

    return 0;
}