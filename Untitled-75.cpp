#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    public:
    string name;
    double BasicSalary;
    string dept,JoinDate,company;

    public:
    void setdata();
    void getdata();
    void sal_cal();
};
void Employee::setdata()
{
    cout<<"\n Name: Dhruv Dhayal"<<endl;
    cout<<"\n Enrollment No: 06313702022"<<endl;
    
    cout<<"\n----------------------------Application Forms!-------------------------\n";

    cout<<"\n 1. Enter the Name of an Employee: ";
    cin>>name;
    cout<<"\n 2. Enter the Company,which "<<name<<" applied for: ";
    cin>>company;
    cout<<"\n 3. Enter the Basic_Salary of the Employee: ";
    cin>>BasicSalary;
    cout<<"\n 4. Joinning Date of the Employee in "<<company<<" is: ";
    cin>>JoinDate;
    cout<<"\n 5. Enter the Department , you applied for: ";
    cin>>dept;
}
void Employee::getdata()
{
    cout<<"\n---------------------------Details of an Employee!------------------------\n";

    cout<<"\n --> Name of the Employee: "<<name<<endl;
    cout<<"\n --> Company working time-way: "<<company<<endl;
    cout<<"\n --> Basic_Salary of an Employee: "<<BasicSalary<<endl;
    cout<<"\n --> Joinning Date of an Employee: "<<JoinDate<<endl;
    cout<<"\n --> Department Employee (Working for!): "<<dept<<endl;
}
void Employee::sal_cal()
{
    cout<<"\n----------------------------Bank-Details!-----------------------------------\n";
    
    cout<<"\n ----> Basic Salary of the Employee: "<<BasicSalary<<endl;
    cout<<"\n --> Name : "<<name<<endl;
    cout<<"\n --> Basic_Salary: "<<BasicSalary<<endl;
    cout<<"\n --> Department: "<<dept<<" in a "<<company<<endl;
    cout<<"\n --> Joinning_Date: "<<JoinDate<<endl;
    double hra,da;
    hra=(BasicSalary*10)/100;
    da=(BasicSalary*40)/100;
    cout<<"\n --> (HR)- House Rental Allowance: "<<hra<<endl;
    cout<<"\n --> (DA)- Dearness Allowness: "<<da<<endl;
}
int main()
{
    Employee E1[5];

    // Input data for each employee
    for (int i = 0; i < 5; i++) 
    {
        E1[i].setdata();
    }

    // Display data for each employee
    for (int i = 0; i < 5; i++) 
    {
        E1[i].getdata();
    }

    // Calculate salary for each employee
    for (int i = 0; i < 5; i++) 
    {
        E1[i].sal_cal();
    }
    return 0;
}
