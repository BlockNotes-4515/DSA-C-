#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class demo
{
    private:
    float x,y;

    public:
    demo()
    {
        x=5;
        y=6;
    }
    demo(float a,float b)
    {
        x=a;
        y=b;
    }
    demo(double l)
    {
        x=l;
        y=9.8;
    }
    demo( demo &z)
    {
        x=z.x;
        y=z.y;
    }
    void display()
    {
        cout<<"\n --> Values of x: "<<x<<" and y: "<<y<<endl;
    }
};
int main()
{
    demo d,d1(9.9,8.2),d2(5.5),d3(d2);
    d.display();
    d1.display();
    d2.display();
    d3.display();

    return 0;
}