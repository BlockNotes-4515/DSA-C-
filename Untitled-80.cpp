#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class area
{
    private:
    static int length;
    static int breadth;
    static int height;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the height of the Triangle: ";
        cin>>length;
        cout<<"\n 2. Enter the Breadth of the Triangle: ";
        cin>>breadth;
        cout<<"\n 3. Enter the Height of the Triangle: ";
        cin>>height;
    }
    static void getdata()
    {
        cout<<"\n-----------------------Details Regarding Triangle!-------------------\n"<<endl;

        cout<<"\n --> Height: "<<height<<" Length: "<<length<<" and Breadth: "<<breadth<<" of a Triangle!"<<endl;
        cout<<"\n 1. Height of a Triangle: "<<height<<endl;
        cout<<"\n 2. Length of the Triangle: "<<length<<endl;
        cout<<"\n 3. Breadth of the Triangle: "<<breadth<<endl;

        cout<<"\n------------------------Area of the Triangle!-------------------------\n"<<endl;

        int total=(0.5*length*breadth);
        cout<<"\n --> Total Area of the Triangle is: "<<total<<endl;
    }
};
int area::length;
int area::breadth;
int area::height;

int main()
{
    area a1;
    a1.setdata();
    a1.getdata();

    return 0;
}