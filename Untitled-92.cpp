#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class area
{
    private:
    int a;
    float l,b;
    float r;
    int base,h;

    public:
    void setdata();
    friend int square(area);
    friend float rectangle(area);
    friend float circle(area);
    friend int triangle(area);
};
void area::setdata()
{
    cout<<"\n------------------------Enter the Details!-------------------------\n"<<endl;

    cout<<"\n 1. Enter the Side of a Square: ";
    cin>>a;
    cout<<"\n 2. Enter the Length/Breadth of a Rectangle: ";
    cin>>l>>b;
    cout<<"\n 3. Enter the Radius of a Circle are: ";
    cin>>r;
    cout<<"\n 4. Enter the Base/Height of a Triangle: ";
    cin>>base>>h;
}
int square(area a1)
{
    return(a1.a*a1.a);
}
float rectangle(area a2)
{
    return(a2.l*a2.b);
}
float circle(area a3)
{
    return(3.14*a3.r*a3.r);
}
int triangle(area a4)
{
    return(0.5*a4.base*a4.h);
}
int main()
{
    area obj1;

    obj1.setdata();
    cout<<"\n-----------------------------Results Given!------------------------------\n"<<endl;

    cout<<"\n --> Area of a Square are: "<<square(obj1)<<endl;
    cout<<"\n --> Area of a Rectangle are : "<<rectangle(obj1)<<endl;
    cout<<"\n --> Area of a Circle are: "<<circle(obj1)<<endl;
    cout<<"\n --> Area of a Triangle are: "<<triangle(obj1)<<endl;

    return 0;
}