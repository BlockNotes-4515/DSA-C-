#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class student
{
    private:
    int roll_no;
    char name[20];

    public:
    void setdata(int roll_no_in,char* name_in)
    {
        roll_no=roll_no_in;
        strcpy(name=name_in);
    }
    void display()
    {
        cout<<"\n 1. Your Given form of Roll_No: "<<roll_no<<endl;
        cout<<"|n 2. Your Registered Name is: "<<name<<endl;
    }
};
int main()
{
    student s1;
    student s2;
    s1.setdata(1,"Dhruv");
    s2.setdata(2,"Suraj");
    cout<<"\n-->Student Details !!\n"<<endl;
    s1.display();
    s2.display();

    return 0;
}