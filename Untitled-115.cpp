#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
/*
class A       //Single Level Inheritence.
{
    public:
    int a;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the values of a: ";
        cin>>a;
    }
    void getdata()
    {
        cout<<"\n | --> The values of a are: "<<a<<endl;
    }
};
class B:public A
{
    private:
    int b,c;

    public:
    void mult()
    {
       cout<<"\n 2. Enter the values of c and d: ";
       cin>>b>>c;
    }
    void display()
    {
        cout<<"\n | --> Multiplication of three variables are: "<<(b*c*a)<<endl;
    }
};
int main()
{
    class B obj1;

    obj1.setdata();
    obj1.getdata();
    obj1.mult();
    obj1.display();

    return 0;
}*/
/*class A                      //Multilevel Inheritence popular use.
{
    public:
    int a;

    public:
    void setdata()
    {
        cout<<"\n-------------------|Class A|"<<endl;
        cout<<"\n 1. Enter the values of a: ";
        cin>>a;
    }
    void getdata()
    {
        cout<<"\n 2. The given values of a are: "<<a<<endl;
    }
};
class B 
{
    public:
    int b,c;

    public:
    void sum()
    {
        cout<<"\n-------------------|Class B|"<<endl;
        cout<<"\n --> Enter the values of b: ";
        cin>>b;
        cout<<"\n --> Enter the values of c: ";
        cin>>c;
    }
    void display()
    {
        cout<<"\n | --> Sum of c and d are: "<<b<<" + "<<c<<" = "<<(c+b)<<endl;
    }
};
class C : public A,public B
{
    public:
    int h,e;

    public:
    void tech()
    {
        cout<<"\n-------------------|Class C|"<<endl;
        cout<<"\n | --> Enter the values of h and e: ";
        cin>>h>>e;
    }
    void show()
    {
        cout<<"\n | --> Multiplication of a are: "<<(a*a)<<endl;
        cout<<"\n | --> Sum of two values are: "<<(c+b)<<endl;
        cout<<"\n | --> Area of an Rectangle are: "<<(h*e)<<endl;
    }
};
int main()
{
    class C obj1;
    obj1.setdata();
    obj1.getdata();
    obj1.sum();
    obj1.display();
    obj1.tech(),
    obj1.show();

    return 0;
}*/
//Multiple-Level Inheritence.
class A 
{
    public:
    int a;

    public:
    void setdata()
    {
        cout<<"\n | --> Enter the values of a: ";
        cin>>a;
    }
    void getdata()
    {
        cout<<"\n | --> Sum values of himself: "<<(a+a)<<endl;
    }
};
class B : public A
{
    public:
    int b,c;

    public:
    void enter()
    {
        cout<<"\n | --> Enter the values of b: ";
        cin>>b;
        cout<<"\n | --> Enter the values of c: ";
        cin>>c;
    }
    void show()
    {
        cout<<"\n | --> Multipliaction of c and b are: "<<(c*d)<<endl;
        cout<<"\n | --> Multiplication of three Variables are: "<<(a*b*c)<<endl;
    }
};
//class B:public A;
class C
{
    public:
    int x,y;

    public:
    void setgo()
    {
        cout<<"\n | --> Enter the values of x: ";
        cin>>x;
        cout<<"\n | --> Enter the values of y: ";
        cin>>y;
    }
    void getgo()
    {
        cout<<"\n | --> Power of x to y is: "<<(x**y)<<endl;
        cout<<"\n | --> Multiplation of : "<<(c+d)<<endl;
        cout<<"\n | --> Addition of three Variables are: "<<(a+b+c)<<endl;
    }
};
class B:public A;
class C: public B;
int main()
{
    class C obj1;
    obj1.setdata();
    obj1.getdata();
    obj1.setgo();
    obj1.getgo();
    obj1.enter();
    obj1.go();

    return 0;
}