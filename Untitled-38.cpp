#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Declaration of the Data Member Within the Class!.

class date
{
    private:
    int day;
    int month;
    int year;

    public:
    void setdata(int day_in,int month_in, int year_in)
    {
        day=day_in;
        month=month_in;
        year=year_in;
    }
    void outdata()
    {
        cout<<"\n Day: "<<day<<" - "<<" Month: "<<month<<" - "<<" Year: "<<year<<endl;
        cout<<"\n Date: "<<day<<" - "<<month<<" - "<<year<<endl;
    }
};
int main()
{
    date d1,d2,d3;

    d1.setdata(11,12,2002);
    d2.setdata(24,12,2003);
    d3.setdata(29,10,2003);

    cout<<"\n 1. Birthday of the First Author!"<<endl;
    d1.outdata();
    cout<<"\n 2. Birthday of the Second Author!"<<endl;
    d2.outdata();
    cout<<"\n 3. Birthday of the Third Author!"<<endl;
    d3.outdata();

    return 0;
}