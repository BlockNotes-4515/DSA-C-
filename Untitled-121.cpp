#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*
The parameterized constructors can take arguments to initialize an object when it is created. 
Parameters are added to a parameterized constructor just like they are added to a normal function. 
The parameterized constructors can be called implicitly or explicitly.
*/
/*
--> 1. Parametrized constructors can take two or more arguments at the same time in is parameters.
    2. Yes! We, can also use multiple parametrized constructors at the same time, this is called
       as "Constructor Overloading". It's just as like a similar to a Normal Functions!
*/

/*class area
{
    private:
    double length;
    double breadth;

    public:
    area(double l, double b)  //Parametrized Constructors taking the two parameters.
    {
        length=l;
        breadth=b;
    }
    void display()
    {
        cout<<"\n --> Total Area of the Rectangle are: "<<(length*breadth)<<endl;
    }
};
int main()
{
    class area obj1(5.5,8.2);
    obj1.display();
    return 0;
}*/
// Another Examples of the Parametrized Constructors!

/*class area
{
    private:
    int side;
    double radius;
    double length,breadth;
    float base,height;

    public:
    area()
    {
        cout<<"\n 1. Enter the side of the square is: ";
        cin>>side;
    }
    area(double ren)
    {
        radius=ren;
    }
    area(double len, double br)
    {
        length=len;
        breadth=br;
    }
    area(float bd,float hr)
    {
       base=bd;
       height=hr;
    }
    void display()
    {
        cout<<"\n--------------------------Areas & Results of Diffrent Shapes!"<<endl;

        cout<<"\n 1. Area of the Square is: "<<(side*side)<<endl;
        cout<<"\n 2. Area of the Circle is: "<<(3.14*radius*radius)<<endl;
        cout<<"\n 3. Area of the Rectangle are: "<<(length*breadth)<<endl;
        cout<<"\n 4. Area of the Triangle are: "<<(0.5*base*height)<<endl;
    }
};
int main()
{
    class area obj1(2.5),obj2(5.5,8.2),obj3(4.6,6.2);

    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}*/
class area
{
    private:
    int are;
    double r;
    double length,breadth;
    double base,height;

    public:
    area(int a)  //Prametrized onstructors with only one parameters.
    {
        are=a;
    }
    area(double ren)
    {
        r=ren;
    }
    area(double l,double b)  //With two arguments.
    {
        length=l;
        breadth=b;
    }
    area(float bre, float hen)
    {
        base=bre;
        height=hen;
    }
    void display1()
    {
        cout<<"\n-------------------------Fetching all the Data!--------------------------\n"<<endl;
        cout<<"\n || Area of the Square are: "<<(are*are)<<endl;
        cout<<"\n || Area of the Circle are: "<<(3.14*r*r)<<endl;
    }
    void display2()
    {
        cout<<"\n || Area of the Rectangle are: "<<(length*breadth)<<endl;   
        cout<<"\n || Area of the Triangle are: "<<(0.5*base*height)<<endl;  
    }
};
int main()
{
    class area ob(4),obj1(2.5),obj2(5.5,6.2),obj3(4.6,8.2);
    ob.display1();
    obj1.display1();

    obj2.display2();
    obj3.display2();

    return 0;
}