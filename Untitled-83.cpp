#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Gender
{
    private:
    string name;
    int age;
    char gender;

    public:
    void setdata()
    {
        cout<<"\n---------------------------User-Details!-------------------------\n"<<endl;

        cout<<"\n 1. Enter the Name of the User are: ";
        cin>>name;
        cout<<"\n 2. Enter the Age of "<<name<<" is: ";
        cin>>age;
        cout<<"\n 3. Enter your Gender here(M/F): ";
        cin>>gender;
    }
    void getdata()
    {
        cout<<"\n ------------------------------------------------------------\n"<<endl;
        cout<<"\n --> Name of the User are: "<<name<<" its Age is: "<<age<<endl;
        cout<<"\n --> Gender entered by the user: "<<gender<<endl;
        if(gender=='M'|| gender=='m')
        {
            cout<<"\n --> Given Name: "<<name<<" refers to the boy gender: "<<gender<<endl;
        }
        else if(gender=='F'|| gender=='f')
        {
            cout<<"\n --> Given Name: "<<name<<" refers to a girl gender: "<<gender<<endl;
        }
        else
        {
            cout<<"\n Plz try again from choice(M/F)! Wrong, choice has been entered!"<<endl;
        }
    }
};
int main()
{
    Gender g1;
    g1.setdata();
    g1.getdata();

    return 0;
}