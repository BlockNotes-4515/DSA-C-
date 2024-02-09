#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Constructor Overloading-It is used to perform the different task with same constructor name
                        // as of name of a class.
/*class person
{
    private:
    int age;

    public:
    person()
    {
        age=20;
    }
    person(int a)
    {
        age=a;
    }
    int display()
    {
        return(age);
    }
};
int main()
{
    person p1,p2(45);
    cout<<"\n 1. Age of a First person are: "<<p1.display()<<endl;
    cout<<"\n 2. Age of the Second Person: "<<p2.display()<<endl;

    return 0;
}*/
/*class area
{
    private:
    int length;
    int breadth;

    public:
    area(void)  //Constructor Without any arguments.
    {
        length=6;
        breadth=10;
    }
    area(double len,double br)  //Constructor with two arguments.
    {
        length=len;
        breadth=br;
    }
    area(double l)  //Constructor with a single arguments.
    {
        length=l;
        breadth=12;
    }
    int display()
    {
        return(length*breadth);
    }
};
int main()
{
    area a1,a2(5.5,6.8),a3(12.2);
    cout<<"\n 1. Constructor (with no-arguments): "<<a1.display()<<endl;
    cout<<"\n 2. Constructor (With two-arguments): "<<a2.display()<<endl;
    cout<<"\n 3. Constructor (With Single Arguments): "<<a3.display()<<endl;

    return 0;
}*/
/*class area
{
    private:
    int a;
    double r;
    double l,b;
    double base,h;

    public:   //Compile-time Input in programme.
    area(void)
    {
       a=10;
    }
    area(double r1)
    {
        r=r1;
    }
    area(double len,double br)
    {
        l=len;
        b=br;
    }
    area(double b,double he)
    {
        base=b;
        h=he;
    }
    void display()
    {
       cout<<"\n------------------------Area-Details!--------------------------\n"<<endl;

       cout<<"\n --> Area of a Square: "<<(a*a)<<endl;
       cout<<"\n --> Area of a Circle: "<<(3.14*r*r)<<endl;
       cout<<"\n --> Area of an Rectangle: "<<(l*b)<<endl;
       cout<<"\n --> Area of a Triangle: "<<(0.5*base*h)<<endl; 
    }
};
int main()
{
    area a1,a2(2.5),a3(5.2,6.8),a4(2.1,4.4);
    a1.display();
    a2.display();
    a3.display();
    a4.display();

    return 0;
}*/
/*class area
{
    private:
    int a,h;
    float r;
    double l,b;
    double base;

    public:
    area(void)
    {
        a=10;
    }
    area(float r1)
    {
        r=r1;
    }
    area(double len,double bre)
    {
        l=len;
        b=bre;
    }
    area(double bb, int he)
    {
        base=bb;
        h=he;
    }
    int display()
    {
        return(a*a);
    }
    float getdata()
    {
        return(3.14*r*r);
    }
    double getting()
    {
        return(l*b);
    }
    int get()
    {
        return(0.5*base*h);
    }
};
int main()
{
    area a1, a2(2.5);
    area a3(6.5,5.5), a4(5.4,20);
    cout<<"\n --> The Area of the Square are: "<<a1.display()<<endl;
    cout<<"\n --> Th Area of the Circle are: "<<a2.getdata()<<endl;
    cout<<"\n --> Area of the Rectangle are: "<<a3.getting()<<endl;
    cout<<"\n --> Area of the Triangle are: "<<a4.get()<<endl;

    return 0;
}*/

//Constructor Overloading -using of the constructor similiar to function-overloading.
                          /* we, uses constructors multiple times as we want to perform multiple 
                           costructor overloading*/

class complex
{
    private:
    int a,b;
    float c,d;

    public:
    complex(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    complex(int c1)
    {
        c=c1;
        d=7;
    }
    void display()
    {
        cout<<"\n --> First Complex values: "<<a<<" + "<<b<<" i"<<endl;
        cout<<"\n --> Second Complex Values: "<<c<<" + "<<d<<" i"<<endl;
        cout<<"\n --> Sum of Complex Numbers: "<<(a+c)<<" + "<<(b+d)<<" i"<<endl;
    }
};
int main()
{
    complex c1(5,6), c2(4);
    c1.display();
    c2.display();

    return 0;
}