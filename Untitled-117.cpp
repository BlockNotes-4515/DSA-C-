#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//*******************************************Single -Level Inheritence!***********************************

//Simplest part of inheritence means: (single level inheritence).

/*class A   //(Super-class, Parent-class, Base-class).
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
        cout<<"\n 2. The values of a: "<<a<<" and its multiplication is: "<<(a*a)<<endl;
    }
};
class B: public A   //(Sub-class, Child-class, Derived-Class)
{
    public:
    int b,c;

    public:
    void input()
    {
        cout<<"\n --> Enter the values of b: ";
        cin>>b;
        cout<<"\n --> Enter the values of c: ";
        cin>>c;
    }
    void show()
    {
        cout<<"\n --> Sum of b and c is: "<<(b+c)<<endl;
        cout<<"\n --> Sum of the (three variables are): "<<(a+b+c)<<endl;
    }
};
int main()
{
    class B obj1;

    obj1.setdata();
    obj1.getdata();
    obj1.input();
    obj1.show();

    return 0;
}*/
/*class E
{
    public:
    string name,dept,date,phn;
    double sal;

    public:
    void setdata()
    {
        cout<<"\n------------------------Application Forms!--------------------------\n"<<endl;

        cout<<"\n 1. Enter the name of an Employee: ";
        cin>>name;
        cout<<"\n 2. Enter the Department of "<<name<<" is: ";
        cin>>dept;
        cout<<"\n 3. Enter the Date of Joinning is: ";
        cin>>date;
        cout<<"\n 4. Enter the "<<name<<" contact number: ";
        cin>>phn;
        cout<<"\n 5. Enter your (Current Salary) are: ";
        cin>>sal;
    }
    void getdata()
    {
        cout<<"\n------------------------Confirmation Details!--------------------------\n"<<endl;

        cout<<"\n | 1. Name of an Employee: "<<name<<endl;
        cout<<"\n | 2. Contact Number: "<<phn<<endl;
        cout<<"\n | 3. Department of "<<name<<" is "<<dept<<" & date-of-joinning: "<<date<<endl;
        cout<<"\n | 4. Current (Check-out Salary): "<<sal<<" of "<<name<<endl;
    }
};
class O:public E
{
    public:
    string checkin,checkout;
    string migration;
    string country;
    double currency;

    public:
    void input()
    {
        cout<<"\n----------------------------On-Boarding Details!-------------------------\n"<<endl;

        cout<<"\n | --> Enter the Chekin date: ";
        cin>>checkin;
        cout<<"\n | --> Enter the Checkout date: ";
        cin>>checkout;
        cout<<"\n | --> Migration Certificate of Visa(Passport): ";
        cin>>migration;
        cout<<"\n | --> Enter the Country (on-board arrival): "<<country<<" of "<<name<<endl;
        cout<<"\n | --> Currency used in "<<country<<" is: ";
        cin>>currency;
    }
    void show()
    {
        cout<<"\n-------------------------------Passenger Details!--------------------------\n"<<endl;

        cout<<"\n | --> Name of the Passenge: "<<name<<" contact: "<<phn<<" Department: "<<dept<<endl;
        cout<<"\n | --> Checkin/checkout "<<checkin<<"-><-"<<checkout<<endl;
        cout<<"\n | --> Passport(Visa): "<<migration<<" of country "<<country<<" of Currency: "<<currency<<endl;
        cout<<"\n | --> Flight No: AZ4515#IUT, Airlines: Emmirates, price: $670/-"<<endl;
    }
};
int main()
{
    class O ob;

    ob.setdata();
    ob.getdata();
    ob.input();
    ob.show();

    return 0;
}*/
//Single Level Inheritence: When one derived class inherits the properties of main_Base class , then it is called
                        //  as "Single-Level Inheritence", it totally depends on derived class because all the value
                        // properties of base class inherits in derived class, it depends on user how to use/modify it
                        // Accordingly.

/*Class A (Base-Class)<--------------------class B(Derived Class)*/

//Multiple level Inheritence.
//Mostly popular (IMP-VIVA).
// When one derived class simple inherit the properties of two or more base class is called as "Multple Level Inheritence!".

/*class A 
{
    public:
    int l;

    public:
    void setdata()
    {
        cout<<"\n-----------------|Class A|"<<endl;

        cout<<"\n 1. Enter the values of a: ";
        cin>>l;
    }
    void getdata()
    {
        cout<<"\n 2. Given Area of an Square is(Side*Side): "<<(l*l)<<endl;
    }
};
class B 
{
    public:
    int b,h;

    public:
    void input()
    {
        cout<<"\n-----------------|Class B|"<<endl;

        cout<<"\n 1. Enter the Base of a Triangle is: ";
        cin>>b;
        cout<<"\n 2. Enter the height of a Triangle is: ";
        cin>>h;
    }
    void show()
    {
        cout<<"\n 3. Area of the Triangle are: "<<(0.5*b*h)<<endl;
    }
};
class C:public A,public B 
{
    public:
    int x;

    public:
    void cal()
    {
        cout<<"\n-----------------|Class C|"<<endl;

        cout<<"\n 1. Enter the values of x: ";
        cin>>x;
    }
    void display()
    {
        cout<<"\n 2. Values of Power of x: "<<(x*x)<<endl;
        cout<<"\n 3. Area of the Cuboid: "<<(2*l*b+b*h+l*h)<<endl;
        cout<<"\n 4. Area of the Recatngle is: "<<(x*b)<<endl;
    }
};
int main()
{
    class C obj1;
    obj1.setdata();
    obj1.getdata();
    obj1.input();
    obj1.show();
    obj1.cal();
    obj1.display();

    return 0;
}*/
class base                    //Main Base class, (Whose values will going to be inherited!)
{
    public:
    int a;

    public:
    void setdata()
    {
        cout<<"\n------------------|Class-A|"<<endl;

        cout<<"\n 1. Enter the values of a: ";
        cin>>a;
    }
    void getdata()
    {
        cout<<"\n 2. Multiplication of number himself is: "<<(a*a)<<endl;
    }
};
class der1:public base          //Derived class1 simply inherits the property of base class.
{ 
    public:
    int x,y;

    public:
    void input()
    {
        cout<<"\n------------------|Class-B|"<<endl;

        cout<<"\n 1. Enter the values of x: ";
        cin>>x;
        cout<<"\n 2. Enter the values of y: ";
        cin>>y;
    }
    void show()
    {
        cout<<"\n 3. Area of an Rectangle is: "<<(x*y)<<endl;
    }
};
class der2:public der1     //Derived class2 simply inherits the propert of derived class1.
{
    public:
    int s;

    public:
    void sum()
    {
        cout<<"\n------------------|Class-C|"<<endl;

        cout<<"\n 1. Enter the values of s: ";
        cin>>s;
    }
    void display()
    {
        cout<<"\n 2. Sum of the (many variables): ("<<s<<" + "<<x<<" + "<<y<<" + "<<a<<" )"<<" = "<<(s+x+y+a)<<endl;
    }
};
int main()
{
    class der2 obj;
    obj.setdata();
    obj.getdata();
    obj.input();
    obj.show();
    obj.sum();
    obj.display();

    return 0;
}
//When Der1 class inherits the property of Base class all propert of base class comes in derived1 class,
//And when Der2 class inherits the property it gets all the prpert of base-to-base class.