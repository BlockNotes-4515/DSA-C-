#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class complex
{
    private:
    int a,c;
    int b,d;

    public:
    complex(void);
    void display()
    {
        cout<<"\n --> values are: "<<a<<" + "<<b<<" i"<<endl;
        cout<<"\n --> Values are: "<<c<<" + "<<d<<" i"<<endl;
        cout<<"\n --> Sum of Complex Number are: "<<(a+c)<<" + "<<(b+d)<<" i"<<endl;
    }
};
complex::complex(void)
{
    cout<<"\n-------------------------Entering all Details!-----------------------\n"<<endl;

    cout<<"\n 1. Enter the values of 'a' and 'b' are: ";
    cin>>a>>b;
    cout<<"\n 2. Enter the Values of 'c' and 'd' are: ";
    cin>>c>>d;
}
int main()
{
    complex c1;
    c1.display();

    return 0;
}*/
/*class area
{
    private:
    int length;
    int breadth;

    public:
    area(void) //Constructors without any arguments.
    {
        length=9;
        breadth=7;
    }
    area(double len,double b)  //Constructors with the two arguments.
    {
       length=len;
       breadth=b;
    }
    area(double l)  //Constructors with one single arguments.
    {
        length=l;
        breadth=10;
    }
    void display()
    {
        return(length*breadth);
    }
};
int main()
{
    area a1;
    area a2(5.5,7.2);
    area a3(6.8);
    cout<<"\n 1. Constructors (without any arguments): "<<a1.display()<<endl;
    cout<<"\n 2. Constructors (With two arguments): "<<a2.display()<<endl;
    cout<<"\n 3. Constructors (With Single Arguments): "<<a3.display()<<endl;

    return 0;
}*/
/*lass point
{
    private:
    int a;
    int b;

    public:
    area(int a1,int b1);
    void display()
    {
        cout<<"\n --> The point of starting and ending are: ("<<a<<" , "<<b<<")"<<endl;
    }
};
area::area(int a1,int b1)
{
    a=a1;
    b=b1;
}
int main()
{
    area p(1,2);
    p.display();

    area q(3,4);
    q.display();

    return 0;
}*/
class area
{
    private:
    int length;
    int breadth;

    public:
    area(void) //Constructors without any arguments.
    {
        length=5;
        breadth=10;
    }
    area(double l,double b) //Constructors with two arguments.
    {
        length=l;
        breadth=b;
    }
    area(double a1)  //Constructors with single arguments.
    {
        length=a1;
        breadth=6;
    }
    void display()
    {
        return(length*breadth);
    }
};
int main()
{
    area a1,a2(3.4,5.5),a3(6.8);
    cout<<"\n 1. Constructors (without any arguments): "<<a1.display()<<endl;
    cout<<"\n 2. Constructors (with Double Arguments): "<<a2.display()<<endl;
    cout<<"\n 3. Constructors (with Single Arguments): "<<a3.display()<<endl;

    return 0;
}