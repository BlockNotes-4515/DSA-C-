#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class Time1
{
    private:
    int hour;
    int min;
    //int sec;

    public:
    void setdata()
    {
        cout<<"\n----------------------------------------Time-Conversions!--------------------------------------\n"<<endl;

        cout<<"\n 1. Enter the total Minutes taken by the user are: ";
        cin>>min;
    }
    void outdata()
    {
        cout<<"\n 2. Entered Minutes taken by the user (Average Mean Time): "<<min<<endl;
        int total=0;
        total=min/60;  //Quotient.
        int counter=0;
        counter=min%60; //Remainder.
        cout<<"\n 3. Time Taken by the User in Hours: "<<total<<" and total Minutes: "<<counter<<endl;
        cout<<"\n 4. Time Taken By a Person (HOURS:MINUTES): "<<total<<" : "<<counter<<endl;
    }
};
int main()
{
    Time1 t1;

    t1.setdata();
    t1.outdata();

    return 0;
}*/
/*class Time1
{
    private:
    int hour;
    int min;
    int sec;

    public:
    void setdata();
    void outdata();
};
void Time1::setdata()
{
    cout<<"\n-----------------------------------Time-Conversions!-------------------------------\n"<<endl;

    cout<<"\n 1. Enter the time taken by the User (in Minutes) are: ";
    cin>>min;
}
void Time1::outdata()
{
    cout<<"\n 2. Time-Taken by the user in terms of (Minutes) are: "<<min<<endl;
    int total=0;
    total=min/60; //Quotient;
    int counter=0;
    counter=min%60; //Remainder.
    cout<<"\n 3. Total Average Mean Time in Hours: "<<total<<" and in Minutes: "<<counter<<endl;
    cout<<"\n 4. Total Time Taken (HOURS): "<<total<<" (MINUTES): "<<counter<<"(HOURS:MINUTES)"<<total<<" : "<<counter<<endl;
}
int main()
{
    Time1 obj;
    obj.setdata();
    obj.outdata();

    return 0;
}*/
class Time1
{
    public:
    int min;

    public:
    void setdata(Time1 ta)
    {
        cout<<"\n 1. Enter your time taken in minutes: "<<ta.min<<endl;
    }
    void outdata(Time1 ta)
    {
        cout<<"\n 2. Time Taken by the user in Minutes: "<<ta.min<<endl;
        int total=ta.min/60;
        int counter=ta.min%60;
        cout<<"\n 3. Total Hours: Minutes are: "<<total<<" : "<<counter<<endl;
    }
};
int main()
{
    Time1 t1;
    t1.min=80;
    cout<<"\n-----------------> Time In Hours:Minutes!"<<endl;
    cout<<"\n 1. In Hours : Minutes =  "<<t1.min<<endl;

    return 0;
}