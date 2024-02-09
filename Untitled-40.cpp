#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Declaring the Member Function Inside/ Within the Class!.
/*
class date
{
    private:
    int day;
    int month;
    int year;

    public:
    void setdata(int day_in, int month_in, int year_in)
    {
        day=day_in;
        month=month_in;
        year=year_in;
    }
    void outdata()
    {
        cout<<"\n\n\t --> Day: "<<day<<" - "<<" Month: "<<month<<" - "<<" Year: "<<year<<endl;
        cout<<"\n\t ----> Date: "<<day<<" - "<<month<<" - "<<year<<endl;
    }
};
int main()
{
    date d1,d2,d3;

    d1.setdata(11,12,2002);
    d2.setdata(24,12,2003);
    d3.setdata(29,12,2004);

    cout<<"\n 1. Birthday of the First Author are: ";
    d1.outdata();
    cout<<"\n 2. Birthday of the Second Author are: ";
    d2.outdata();
    cout<<"\n 3. Birthday of the Third Author are: ";
    d3.outdata();

    return 0;
}*/

//Declaring the Memeber Function Outside the Class!.
class date
{
    private:
    int day;
    int month;
    int year;

    public:
    void setdata(int day_in, int month_in, int year_in);
    void outdata();
};
void date::setdata(int day_in, int month_in, int year_in)
{
        day=day_in;
        month=month_in;
        year=year_in; 
}
void date::outdata()
{
    cout<<"\n\n\t--> Day: "<<day<<" - "<<" Month: "<<month<<" - "<<" Year: "<<year<<endl;
    cout<<"\n\t ---->Date: "<<day<<" - "<<month<<" - "<<year<<endl;
}
int main()
{
    date d1,d2,d3;

    d1.setdata(11,12,2002);
    d2.setdata(24,12,2003);
    d3.setdata(29,12,2004);

    cout<<"\n 1. Birthday of the First Author are: ";
    d1.outdata();
    cout<<"\n 2. Birthday of the Second Author are: ";
    d2.outdata();
    cout<<"\n 3. Birthday of the Third Author are: ";
    d3.outdata();

    return 0;
}