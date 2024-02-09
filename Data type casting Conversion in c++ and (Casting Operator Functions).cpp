#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*----------------------- Explicit Type Casting!-----------------*/

/*--> When we, create an object using the variable of primary data-type 
      (Built-in Datatype) then, it is called as "Base-to-class type Conversion
      Basically, we use single parametrized constructor to perform type conve.
      from "Base type to class type!"
*/

/*class number
{
    private:
    int n;

    public:
    void show()
    {
        cout<<"\n --> Showing the Values of n: "<<n<<endl;
    }
    number(int n)
    {
        this->n=n;
    }
};
int main()
{
    number n1=100;
    n1.show();
    return 0;
}*/

/*class number
{
    private:
    int l,b;

    public:
    void display()
    {
        cout<<"\n --> Here, Length: "<<l<<endl;
        cout<<"\n --> Breadth of Rectangle: "<<b<<endl;
    }
    number(int len,int br)
    {
        l=len;
        b=br;
    }
};
int main()
{
    number r(4,5);
    r.display();
    return 0;
}*/

/*class demo
{
    private:
    int base;
    int height;

    public:
    demo(int b, int h)
    {
        base=b;
        height=h;
    }
    void display()
    {
        cout<<"\n 1. Base of a Triangle: "<<base<<endl;
        cout<<"\n 2. Height of the Triangle are: "<<height<<endl;
    }
    void result()
    {
        cout<<"\n --> Area of the Triangle are: "<<(1/2*base*height)<<endl;
    }
};
int main()
{
    demo d1(5,6);
    d1.display();
    d1.result();
    return 0;
}*/
/* We, generally uses single parametrized constructor because variable holds
  only single value at a time,and passes one argument at particular point of time!*/

/*class area 
{
    private:
    int a;

    public:
    area(int aa)  
    {
        a=aa;
    }
    void show()
    {
        cout<<"\n 1. Given Values of a: "<<a<<endl;
        cout<<"\n --> Area of the Square are: "<<(a*a)<<endl;
    }
};
int main()
{
    area a1=5;
    a1.show();
    return 0;
}*/
/*----------------------------- Implicit type Casting! -------------------------------*/
/*class number
{
    private:
    int n;

    public:
    void show()
    {
        cout<<"\n --> Values of n: "<<n<<endl;
    }
    number(int n)
    {
        this->n=n;
    }
    operator int()
    {
        return n;
    }
};
int main()
{
    number n1=105;
    n1.show();
    int x=n1;
    cout<<"\n --> Values of x: "<<x<<endl;
    return 0;
}*/

/*class demo
{
    private:
    int a;

    public:
    demo(int aa)
    {
        a=aa;
    }
    void show()
    {
        cout<<"\n 1. Value of one-side of Square: "<<a<<endl;
        cout<<"\n 2. Area of the Square are: "<<(a*a)<<endl;
    }
    operator int()  // It's having no-parameter with no-aceepting arguments!
    {
        return (a*a);
    }
};
int main()
{
    demo d1=5;
    d1.show();
    int x=d1;
    cout<<"\n --> Value of x: "<<x<<endl;
    return 0;
}*/

//------------------------- Conversion in (one class type into another class type!)---------------------!

/*Explanation: 1. When we, simply assign an object of one class into another class then it is also
                  know as (class-to-class conversion) or class type to another class type conversion!
                
               2. The class-to-class conversion can be performed eighter by defining "caste operator function
                  in a source class or using the constructor in a destination class.
                  
               3. NOTE: "caste operator function" does not have any 'return' type and does not aceept any
                         arguments.
                         
*/

/*class rectangle 
{
    private:
    int l,b;
    int area;

    public:
    rectangle(int len,int br)
    {
        l=len;
        b=br;
        area=(l*b);
    }
    void display()
    {
        cout<<"\n --> 1. Area of the Rectangele are: "<<area<<endl;
    }
};
class triangle 
{
    private:
    int base;
    int height;
    int area2;

    public:
    triangle(int b,int h)
    {
       base=b;
       height=h;
       area2=1/2*(base*height);
    }
    void show()
    {
        cout<<"\n --> 2. Area of the Triangle are: "<<area2<<endl;
    }
    operator rectangle ()
    {
        rectangle temp(l,b);
        return temp;
    }
};
int main()
{
    triangle t1(4,5);
    rectangle r=t1;
    t1.show();
    r.display();
    return 0;
}*/

class rectangle  //We, take 'rectangle' class as a 'destination address'!
{
    private:
    int len;
    int bre;
    int area;

    public:
    rectangle(int l, int b)
    {
        len=l;
        bre=b;
        area=(len*bre);
    }
    void display()
    {
        cout<<"\n 2. Area of the Rectangle are: "<<area<<endl;
    }
};
class triangle    //We, take triangle class as a 'source address'!
{
    private:
    int base;
    int height;
    int result;

    public:
    triangle(int b, int h)
    {
        base=b;
        height=h;
        result=1/2*(base*height);
    }
    void show()
    {
        cout<<"\n 1. Area of the Triangle are: "<<result<<endl;
    }
    operator rectangle()
    {   int len,bre;
        rectangle temp(len,bre);
        return temp;
    }
};
int main()
{  
    triangle t1(5,6);
    rectangle r1=t1;
    t1.show();
    r1.display();
    return 0;
}