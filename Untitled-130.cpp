#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int age;
    string name;
    char gender;

    cout<<"\n------------- Applications! -----------------"<<endl;

    cout<<"\n 1. Enter the name of the student: ";
    cin>>name;
    cout<<"\n 2. Enter your age here: ";
    cin>>age;
    cout<<"\n 3. Enter your gender here: ";
    cin>>gender;

    cout<<"\n------------- Checking Exceptions/ Errors! -----------------"<<endl;

    try
    {
        if(age>20)
        {
            throw 20;
        }
        else
        {
            cout<<"\n ------------------ Ticket Booked ||= ------------"<<endl;

            cout<<"\n || (i). Name of the Player: "<<name<<endl;
            cout<<"\n || (ii). Gender: "<<gender<<endl;
            cout<<"\n || (iii). Age (eligible) of a player: "<<name<<" age: "<<age<<endl;
        }
    }
    catch(int x)
    {
        cout<<"\n --> Sorry! (Age-Lmit restrictions) abover age-20 are strictly not allowed!"<<endl;
    }
}