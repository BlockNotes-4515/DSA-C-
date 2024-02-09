#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class details
{
    private:
    int no;
    int ID;
    string name,company;

    public:
    details(void);
    void display()
    {
        cout<<"\n---------------------------Employee-Details!----------------------\n"<<endl;
        
        cout<<"\n --> Name of an Employee: "<<name<<endl;
        cout<<"\n --> Id of "<<name<<" is: "<<ID<<endl;
        cout<<"\n --> Working Experience of "<<name<<" is: "<<no<<" in "<<company<<" !"<<endl;
    }
};
details::details(void)
{
    cout<<"\n----------------------------Application-Details!-----------------------\n"<<endl;

    cout<<"\n 1. Enter the Name of an Employee: ";
    cin>>name;
    cout<<"\n 2. Enter the "<<name<<" company is: ";
    cin>>company;
    cout<<"\n 3. Id of "<<name<<" is: ";
    cin>>ID;
    cout<<"\n 4. Working Experience: ";
    cin>>no;
}
int main()
{
    details d1;
    d1.display();

    return 0;
}