#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/* By, using with friend classes we, easily finding The Maximum Values!.*/

/*class B;
class A 
{
    private:
    int a;
    
    public:
    void put()
    {
        cout<<"\n 1. Enter the Values of a: ";
        cin>>a;
    }
    friend void max(class A,class B);
};
class B 
{
    private:
    int b;

    public:
    void input()
    {
        cout<<"\n 2. Enter the Values of b: ";
        cin>>b;
    }
    friend void max(class A,class B);
};
void max(A aa,B bb)
{
    if(aa.a>bb.b)
    {
        cout<<"\n --> Maximum values are: "<<aa.a<<endl;
    }
    else
    {
        cout<<"\n --> Maximum values are: "<<bb.b<<endl;
    }
}
int main()
{
    A aa;
    B bb;
    aa.put();
    bb.input();
    max(aa,bb);

    return 0;
}*/

/*class B;
class A 
{
    private:
    int a,b;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the first number: ";
        cin>>a;
        cout<<"\n 2. Enter the Second Number: ";
        cin>>b;
    }
    friend void max(class A,class B);
};
class B 
{
    private:
    int c;

    public:
    void getdata()
    {
        cout<<"\n 3. Enter the Third Number here: ";
        cin>>c;
    }
    friend void max(class A,class B);
};
void max(A aa,B bb)
{
    if(aa.a>aa.b && aa.a>bb.c)
    {
        cout<<"\n --> First Number is Greatest: "<<aa.a<<endl;
    }
    else if(aa.b>aa.a && aa.b>bb.c)
    {
        cout<<"\n --> Second Number is Greatest: "<<aa.b<<endl;
    }
    else
    {
        cout<<"\n --> Third Number is Greatest: "<<bb.c<<endl;
    }
}
int main()
{
    A aa;
    B bb;
    aa.setdata();
    bb.getdata();
    max(aa,bb);

    return 0;
}*/
//Performing the factorial by using the Friend Classes.
class B;
class A 
{
    private:
    int num1;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the Number in order to find its factorial: ";
        cin>>num1;
    }
    friend void fact(class A,class B);
};
class B 
{
    private:
    int num2;

    public:
    void getdata()
    {
       cout<<"\n 2. Enter the Second Number to find its factorial: ";
       cin>>num2;
    }
    friend void factorial(class A,class B);
};
void factorial(A aa, B bb)
{
    int fact=1;
    
    if(aa.num1>bb.num2)
    {
        for(int i=0;i<=aa.num1;i++)
        {
            fact=fact*i;
        }
        cout<<"\n --> Factorial of "<<aa.num1<<" is given fact: "<<fact<<endl;
    }
    else
    {
        for(int i=0;i<=bb.num2;i++)
        {
            fact=fact*i;
        }
        cout<<"\n --> Factorial of "<<bb.num2<<" is given fact: "<<fact<<endl;
    }
}
int main()
{
    A aa;
    B bb;
    aa.setdata();
    bb.getdata();
    fact(aa,bb);

    return 0;
}

