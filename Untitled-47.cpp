#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
    private:
    int no;
    string name;

    public:
    void setdata()
    {
        cout<<"\n 1. How, many people are together with you: ";
        cin>>no;
        for(int i=0;i<=no;i++)
        {
        cout<<"\n @ Please Enter you name here: ";
        cin>>name;
        }
    }
    void outdata()
    {
        cout<<"\n @ Total Number of People in the class: "<<no<<endl;
        for(int i=0;i<=no;i++)
        {
            cout<<"\n @ The Names of all Persons are: "<<name<<endl;
            cout<<endl;
        }
    }
};
int main()
{
    person p1;
    p1.setdata();
    cout<<"\n-----------------Your Given Details are here!-------------------"<<endl;
    p1.outdata();

    return 0;
}