#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//More on Friend Functions in C++.

/*class swap
{
    priavte:
    int a;
    int b;

    public:
    void setdata();
    friend int swapping(swap);
};
void swap::setdata()
{
    cout<<"\n 1. Enter the First Number: ";
    cin>>a;
    cout<<"\n 2. Enter the Second Number: ";
    cin>>b;
    cout<<"\n --> Before Swapping a: "<<a<<" and b: "<<b<<endl;
}
int swapping(swap s1)
{
    s1.temp=s1.a;
    s1.a=s1.b;
    s1.b=s1.temp;
    cout<<"\n --> After Swapping a: "<<a<<" and b: "<<b<<endl;
}
int main()
{
    swap obj;
    obj.setdata();
    cout<<"\n Values of swapping are: "<<swapping(obj);

    return 0;
}*/
class ABC;
 
class XYZ 
{
    int x;
 
public:
    void set_data(int a)
    {
      x = a;
    }
 
    friend void max(XYZ, ABC);
};

class ABC {
    int y;
 
public:
    void set_data(int a)
    {
      y = a;
    }
 
    friend void max(XYZ, ABC);
};
 
void max(XYZ t1, ABC t2)
{
    if (t1.x > t2.y)
        cout << t1.x;
    else
        cout << t2.y;
}
 
// Driver code
int main()
{
    ABC _abc;
    XYZ _xyz;
    _xyz.set_data(20);
    _abc.set_data(35);
 
    // calling friend function
    max(_xyz, _abc);
    return 0;
}