#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    int age;
    string address;

    public:
    void getdata()
    {
        cout<<"\n Name: Dhruv Dhayal"<<endl;
        cout<<"\n Enrollment Number: 06313702022"<<endl;
        
        cout<<"\n 1. Enter the Name of an Employee: ";
        cin>>name;
        cout<<"\n 2. Enter the Age of an Employee: ";
        cin>>age;
        cout<<"\n 3. Enter the Address of "<<name<<" is: ";
        cin>>address;
    }
    void showdata()
    {
        cout<<"\n-----------------------------Output Result!---------------------------\n"<<endl;

        cout<<"\n --> Name: "<<name<<endl;
        cout<<" --> Age: "<<age<<endl;
        cout<<" --> Address: "<<address<<endl;
    }
};
int main()
{
    Employee E1;

    E1.getdata();
    E1.showdata();

    return 0;
}