#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class Employee
{
    private:
    string name;
    int age;
    string address;

    public:
    void getdata()
    {
        cout<<"\n 1. Enter the Name of an Employee: ";
        cin>>name;
        cout<<"\n 2. Enter the Current age of an Employee "<<name<<" age is: ";
        cin>>age;
        cout<<"\n 3. Enter your Current Address/city/state: ";
        cin>>address;
    }
    void showdata()
    {
        cout<<"\n---------------------------------Details of an Employee!--------------------------------\n";

        cout<<"\n Name: "<<name<<endl;
        cout<<"\n Age: "<<age<<endl;
        cout<<"\n Address: "<<address<<endl;
    }
};
int main()
{
    Employee E1;
    E1.getdata();
    E1.showdata();

    return 0;
}*/
class Employee
{
    private:
    string name;
    int age;
    string address;

    public:
    void getdata();
    void showdata();
};
void Employee::getdata()
{
    cout<<"\n 1. Enter the Name of an Employee: ";
    cin>>name;
    cout<<"\n 2. Enter the Age of Employee "<<name<<" age is: ";
    cin>>age;
    cout<<"\n 3. Enter the Current Address / Location of an Employee: ";
    cin>>address;
}
void Employee::showdata()
{
    cout<<"\n-----------------------Employee Details!--------------------------\n"<<endl;

    cout<<"\n 1. Name: "<<name<<endl;
    cout<<"\n 2. Age: "<<age<<endl;
    cout<<"\n 3. Address: "<<address<<endl;

    return 0;
}