#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class time1
{
    private:
    int hour;
    int min;
    int sec;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the total Hours taken by the user are: ";
        cin>>hour;
        cout<<"\n 2. Enter the total minutes in an hour as(approx.): ";
        cin>>min;
        cout<<"\n 3. Enter the Seconds taken by the user with mean time: ";
        cin>>sec;
    }
    void outdata()
    {
        cout<<"\n 4. Total time taken by the user in hours: "<<hour<<" in minutes: "<<min<<" and in seconds: "<<sec<<endl;
        int total=0;
        total=hour/60;
        int counter=0;
        counter=min%60;
        cout<<"\n 5. Total Time Taken are: "<<total<<"and the minutes: "<<min<<" in ratio of = "<<total<<" : "<<counter<<endl;
    }
};
int main()
{
    time1 t1;
    t1.setdata();
    t1.outdata();

    return 0;
}