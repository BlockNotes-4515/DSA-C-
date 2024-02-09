#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//------------------------------------ Operator Overloading! ----------------------------------!!

                              /* Operator Overloading in Unary Operators.*/
/*class test
{
    private:
    int value;

    public:
    test()
    {
        value=8;
    }
    void operator++()
    {
        value=value+2;
    }
    void display()
    {
        cout<<"\n The Values of the Pre-Increment: "<<value<<endl;
    }
};
int main()
{
    test t1;
    ++t1;
    t1.display();
    return 0;
}*/
/*class test
{
    private:
    int value;

    public:
    test()
    {
        value=8;
    }
    void operator++()
    {
        value=value+2;
    }
    void display()
    {
        cout<<"\n --> The Value of the Pre-Increment is: "<<value<<endl;
    }
};
int main()
{
    test t1;
    ++t1;  //Pre-Increment.
    t1.display();
    return 0;
}*/

// Operator Overloading in Post-Increment.

/* It is just as like an similar to a pre-Increment but main-difference is that we, need to use datatype 'int'
   Otherwise, it will raises an error.*/
/*
class demo
{
    private:
    int value;

    public:
    demo()
    {
        value=14;
    }
    void operator++(int)
    {
        value=value+1;
    }
    void display()
    {
        cout<<"\n --> Given Post-Increment are: "<<value<<endl;
    }
};
int main()
{
    demo d1;
    d1++;
    d1.display();
    return 0;
}*/
// Unary Operator in two-variables.
/*
class test
{
    private:
    int value;

    public:
    test()
    {
        value=5;
    }
    int getvalue()
    {
        return value;
    }
    void operator++()
    {
        value=value+1;
    }
};
int main()
{
    test t1,t2;
    cout<<"\n--------------------- Before Pre-Increment! -----------------------"<<endl;
    cout<<"\n 1. First values are: "<<t1.getvalue()<<endl;
    cout<<"\n 2. Second values are: "<<t2.getvalue()<<endl;
    ++t1;
    cout<<"\n---------------------- After Pre-Increment! -----------------------"<<endl;
    cout<<"\n 3. First values are: "<<t1.getvalue()<<endl;
    cout<<"\n 4. Second values are: "<<t2.getvalue()<<endl;
    return 0;
}*/
/*
class test
{
    private:
    int value;

    public:
    test()
    {
        value=5;
    }
    void operator++(int)
    {
        value=value+2;
    }
    int getvalue()
    {
        return value;
    }
};
int main()
{
    test t1,t2;
    cout<<"\n ------------------------ Before Post-Increment! --------------------------"<<endl;
    cout<<"\n 1. First Values are: "<<t1.getvalue()<<endl;
    cout<<"\n 2. Second Value are: "<<t2.getvalue()<<endl;
    t1++;
    cout<<"\n ------------------------- After Post-Increment! --------------------------"<<endl;
    cout<<"\n 1. Now, values of First Values is: "<<t1.getvalue()<<endl;
    cout<<"\n 2. Same Second Values is similarly same: "<<t2.getvalue()<<endl;
    return 0;
}*/

// Operator overloading In Binary Numbers!

/* Using the Operator Overloading in two opearnds in Binary Numbers! */

class demo
{
    private:
    int a;
    int b;

    public:
    demo(int d, int c)
    {
        a=d;
        b=c;
    }
    demo operator+(demo &d2)
    {
        demo d3;
        d3.a=a+d2.a;
        d3.b=b+d2.b;
        return d3;
    }
    void display()
    {
        cout<<"\n----------------------- Sum of the Two values ---------------------"<<endl;

        cout<<"\n Sum of the two Numbers are: "<<d3<<endl;
    }
};
int main()
{
    demo d1(1,2),d2(2,3),d3;
    d3=d1+d2;
    d3.display();
    return 0;
}

/*class complex
{
    private:
    int res;
    int img;

    public:
    complex(int r,int i)  //Parametrized Constructors.
    {
        res=r;
        img=i;
    }
    complex operator+(complex &d2)
    {
        complex d3;
        d3.res=res+d2.res;
        d3.img=img+d2.img;
        return d3;
    }
    void show()
    {
        cout<<"\n --> Sum of the complex value: "<<res<<" "<<img<<" i"<<endl;
    }
};
int main()
{
    complex c1(2,5);
    complex c2(8,4);
    complex c3;
    c3=c1+c2;
    c3.show();
    return 0;
}*/