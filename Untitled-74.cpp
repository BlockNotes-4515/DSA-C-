#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    string joinDate,dept;
    double BasicSalary;

    public:
    void input_data()
    {
        cout<<"\n---------------Enter the Details here!-------------\n"<<endl;

        cout<<"\n 1. Enter the name of the Employee: ";
        cin>>name;
        cout<<"\n 2. Enter the Joinning Date of an Employee: ";
        cin>>joinDate;
        cout<<"\n 3. Basic_Salary of the Employee: ";
        cin>>BasicSalary;
        cout<<"\n 4. Enter the Department of the Employee: ";
        cin>>dept;
    }
    void display_data()
    {
        cout<<"\n-----------------------Employee-Details!------------------------\n";
     
        cout<<"\n\n --> Name of the Employee: "<<name<<endl;
        cout<<"\n --> Joinning date of: "<<name<<" is: "<<joinDate<<endl;
        cout<<"\n\n --> Basic Salary of an Employee: "<<BasicSalary<<endl;
        cout<<"\n --> Department of Employee: "<<name<<" is: "<<dept<<endl;
    }
    void sal_cal()
    {   
        char choice;
        double hra,da;
        cout<<"\n-------------------------Basic Salary of Employee Detailes!-------------------\n";
  
        cout<<"\n ----> Basic Salary of the Employee: "<<name<<" is: "<<BasicSalary<<endl;
        cout<<"\n >> Basic Salary: "<<BasicSalary<<endl;
        hra=(BasicSalary*10)/100;
        cout<<"\n >> (HRA)-House Rental Allowance: "<<hra<<endl;
        da=(BasicSalary*40)/100;
        cout<<"\n >> (DA)-Dearness Allowance: "<<da<<endl;  
     }
};
int main()
{
    Employee E1[5];

    // Input data for each employee
    for (int i = 0; i < 5; i++) 
    {
        E1[i].input_data();
    }

    // Display data for each employee
    for (int i = 0; i < 5; i++) 
    {
        E1[i].display_data();
    }

    // Calculate salary for each employee
    for (int i = 0; i < 5; i++) 
    {
        E1[i].sal_cal();
    }
    return 0;
}