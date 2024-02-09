#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    public:
    class person
    {
        public:
        string name;
        int roll_no;
        int id;
        string dept;

        public:
        void setdata()
        {
            cout<<"\n 1. Enter the Name of the student: ";
            cin>>name;
            cout<<"\n 2. Enter the Student "<<name<<" it ID: ";
            cin>>id;
            cout<<"\n 3. Enter the Department of the Company: ";
            cin>>dept;
            cout<<"\n 4. Enter your Roll_Number: ";
            cin>>roll_no;
        }
        void getdata()
        {
            cout<<"\n-----------------------------Student's Details!------------------------\n"<<endl;

            cout<<"\n --> 1. Name of the Student: "<<name<<endl;
            cout<<"\n ---> 2. Roll_Number of the "<<name<<" is: "<<roll_no<<endl;
            cout<<"\n ----> 3. The Student "<<name<<" belongs to: "<<dept<<endl;
            cout<<"\n -----> 4. ID of the Student is: "<<id<<endl;
        }
    };
};
int main()
{
    Employee::person p1;
    p1.setdata();
    p1.getdata();

    return 0;
}