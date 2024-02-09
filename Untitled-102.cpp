#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class sum
{
    private:
    int a;
    int b;

    public:
    sum(void);
    void display()
    {
        cout<<"\n --> Sum of a "<<a<<" and b "<<b<<" is ("<<a<<" + "<<b<<")"<<" = "<<(a+b)<<endl;
    }
};
sum::sum(void)
{
    cout<<"\n 1. Enter the Values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the Values of b: ";
    cin>>b;
}
int main()
{
    sum s1;
    s1.display();

    return 0;
}*/
//-------------------------------------------Properties of Constructors!-----------------------------------------\n"

// 1. 'Constructors' are one of the special type of member functions with the same of a class.
// 2. 'Constructors' generally used to initialize the object within the class.
// 3. 'Constructors' are automatically calles/(invoked), when a new object is being created.
// 4. 'Constructors' is used to construct the classes more than to to construct them.
// 5. 'Constructors' does not have any 'return' type or a 'void' type generally.

/*class area
{
    private:
    int a;
    double r;
    int l,b;
    double base,h;

    public:
    area(void);
    void display()
    {
        cout<<"\n------------------------------Area Details!------------------------------\n"<<endl;

        cout<<"\n 1. Area of a Square are: "<<(a*a)<<endl;
        cout<<"\n 2. Area of a Circle are: "<<(3.14*r*r)<<endl;
        cout<<"\n 3. Area of an Rectangle are: "<<(l*b)<<endl;
        cout<<"\n 4. Area of the Triangle are: "<<(0.5*base*h)<<endl;
    }
};
area::area(void)
{
    cout<<"\n----------------------Enter all Details!---------------------------\n"<<endl;

    cout<<"\n 1. Enter the area of one side of a Square: ";
    cin>>a;
    cout<<"\n 2. Enter the Radius of a Circle: ";
    cin>>r;
    cout<<"\n 3. Enter the 'length' and 'breadth' of a Rectangle are: ";
    cin>>l>>b;
    cout<<"\n 4. Enter the 'base' and 'height' of a Triangle are: ";
    cin>>base>>h;
}
int main()
{
    area a1;
    a1.display();

    return 0;
}*/

class area
{
    private:
    int a;
    float r;
    int l,b;
    float base,h;

    public:
    area(void);
    void getdata()
    {
        cout<<"\n --> Area of a Square: "<<(a*a)<<endl;
    }
    void setdata()
    {
        cout<<"\n --> Area of a Circle: "<<(3.14*r*r)<<endl;
    }
    void rectangle()
    {
        cout<<"\n --> Area of a Rectangle: "<<(l*b)<<endl;
    }
    void display()
    {
        cout<<"\n --> Area of a Triangle: "<<(0.5*base*h)<<endl;
    }
};
area::area(void)
{
    cout<<"\n------------------------------Details of Areas!--------------------------\n"<<endl;

    cout<<"\n 1. Enter the one side of a square are: ";
    cin>>a;
    cout<<"\n 2. Enter the radius of a circle: ";
    cin>>r;
    cout<<"\n 3. Enter the 'length' and 'breadth' of a Rectangle are: ";
    cin>>l>>b;
    cout<<"\n 4. Enter the 'base' and 'height' of a Triangle are: ";
    cin>>base>>h;
}
int main()
{
    area a1;
    a1.getdata();
    a1.setdata();
    a1.rectangle();
    a1.display();

    return 0;
}