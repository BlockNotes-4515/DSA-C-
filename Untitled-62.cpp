#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class timmings
{
    private:
    int hour;
    int min;
    //int sec;

    public:
    void setdata();
    void outdata();
};
void timmings::setdata()
{
    cout<<"\n 1. Enter the Minutes taken by you in order to convert: ";
    cin>>min;
}
void timmings::outdata()
{
    int total=0;
    total=min/60; //Quotient.
    int counter=0; 
    counter=min%60; //Remainder.
    cout<<"\n 2. Time Taken by you in Actual Mean Time is in Hours: "<<total<<" and in Minutes: "<<counter<<endl;
    cout<<"\n\t--> Time Average input taken by the User are: "<<total<<" : "<<counter<<endl;
}
int main()
{
    timmings t1;

    t1.setdata();
    t1.outdata();

    return 0;
}