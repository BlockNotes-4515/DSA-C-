#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class test
{
    private:
    int a;
    int b;

    public:
    void getdata();
    friend int sum(test);
};
void test::getdata()
{
    cout<<"\n 1. Enter the First Number: ";
    cin>>a;
    cout<<"\n 2. Enter the Second Number: ";
    cin>>b;
}
int sum(test t)
{
    return (t.a+t.b);
}
int main()
{
    test t1;

    t1.getdata();
    cout<<sum(t1);

    return 0;
}*/
//FRiend Function: It is not the part of a class and is used to acess the value of private/protected acess modifiers, it generally uses 'friend' functions.
/*class value
{
    private:
    int num;

    public:
    void getdata();
    friend float area(value);
};
void value::getdata()
{
    cout<<"\n 1. Enter the Radius to find the area of the Circle: ";
    cin>>num;
}
float area(value v1)
{
    return(3.14*v1.num*v1.num);
}
int main()
{
    value v;
    v.getdata();
    cout<<area(v);

    return 0;
}*/

/*class find
{
    private:
    int num;

    public:
    void getdata();
    friend float circle(find);
};
void find::getdata()
{
    cout<<"\n 1. Enter the Radius of the Circle(to find its area): ";
    cin>>num;
}
float circle(find f1)
{
    return(3.14*f1.num*f1.num);
}
int main()
{
    find fo;
    fo.getdata();
    cout<<"\n --> Area of the Circle: "<<circle(fo);

    return 0;
}*/

class area
{
   private:
   int r;

   public:
   void getdata();
   friend float circle(area);
};
void area::getdata()
{
    cout<<"\n 1. Enter the Radius of a Circle r: ";
    cin>>r;
}
float circle(area a1)
{
    return(3.14*a1.r*a1.r);
}
int main()
{
    area a;
    a.getdata();
    cout<<"\n 2. Total Area of the Circle are: "<<circle(a);
    cout<<endl;

    return 0;
}