#include<iostream>
#include<iomanip>
using namespace std;

int area(int a)
{
    return (a*a);
}
double area(double r)
{
    return (3.14*r*r);
}
double area(double l,double b)
{
    return (l*b);
}
float area(float b,float h)
{
    return (0.5*b*h);
}
int main()
{
    cout<<"\n-----------------------------------Area of Different Shapes!---------------------------------\n"<<endl;
    
    cout<<"\n 1. Area of the Square: "<<area(4)<<endl;
    cout<<"\n 2. Area of the Circle: "<<area(5.5)<<endl;
    cout<<"\n 3. Area of the Rectangle: "<<area(2.5,8.2)<<endl;
    cout<<"\n 4. Area of the Triangle: "<<area(4.4,6.5)<<endl;

    return 0;
}