#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    private:
    string name,dept;
    int roll_no;
    static int id;

    public:
    void setdata()
    {
        cout<<"\n----------------------------------------Application Form!--------------------------------\n"<<endl;

        cout<<"\n 1. Enter the name of an Employee: ";
        cin>>name;
        cout<<"\n 2. Enter the Department of "<<name<<" is: ";
        cin>>dept;
        cout<<"\n 3."<<name<<" Please! Enter your Roll_Number here: ";
        cin>>roll_no;
        cout<<"\n 4. Enter the ID of an "<<name<<" is: ";
        cin>>id;
    }
    void getdata()
    {
        cout<<"\n--------------------------Employee Details!-------------------\n"<<endl;

        cout<<"\n --> Name of an Employee: "<<name<<endl;
        cout<<"\n ---> Department of "<<name<<" is: "<<dept<<endl;
        cout<<"\n ----> Roll_Number of "<<name<<" is: "<<roll_no<<" and its ID: "<<id<<endl;
    }
    static void count() //Static Member Functions , which is used to acess the static object values only.
    {
        cout<<"\n == Now, You can see the acessing the static object, which is ID: "<<id<<endl;
    }
};

/*Using of the "Static Member Function" is used to acess all the Static Data-Member in one go at once!*/

int Employee::id;
int main()
{
    Employee E1;
    E1.setdata();
    E1.getdata();
    E1.count();

    return 0;
}