#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//------------------------------ Nameless class Objects ! ------------------------------.

/* 1. Nameless class objects of the class created without any name that's why it is called as
      "Anonymous Functions", without object name we pass the values.

   2. Syntax: class_name({Parameters});

   3. When these Anonymous objects created it creates it seperate memory locations but for 
      Temporary basis, when after the computation/ Manipulation of the certain tasks it will
    going to be self get destroyed!
*/

/*class test
{
    private:
    int a;
    int b;

    public:
    test()  //Default Constructors.
    {
        a=9;
        b=5;
    }
    test(int aa, int bb) //Parametrized Constructors.
    {
        cout<<"\n -- Constructor Executed!"<<endl;
        a=aa;
        b=bb;
    }
    ~test()
    {
        cout<<"\n --> Destructor Executed!"<<endl;
    }
};
int main()
{
    test({1,2});  //Nameless class objects / or a/ Anonymous Objects without any name.
    test({5,6});  // Syntax: class_name({Parameters});
    return 0;
}*/

/*class demo
{
    private:
    int a;
    int b;

    public:
    demo()  //Default Constructors.
    {
        a=10;
        b=56;
    }
    demo(int h, int t)  //Parametrized Constructors.
    {
        cout<<"\n --> Constructor Executed!"<<endl;
        a=h;
        b=t;
    }
    void display()
    {
        cout<<"\n --> Given Values of a: "<<a<<" and b: "<<b<<" and its sum: "<<(a+b)<<endl;
    }
    ~demo()
    {
        cout<<"\n --> Destructor Executed!"<<endl;
    }
};
int main()
{
    demo({5,6}).display();  //Nameless class objects / Anonymous Objects.
    demo ({8,9}).display(); // Syntax: class_name({parameters}).function_name(Parameters);
    return 0;
}*/

/*class complex
{
    private:
    int res;
    int img;

    public:
    complex()
    {
        res=5;
        img=7;
    }
    complex(int r, int i)
    {
        cout<<"\n --> Constructor Executed!"<<endl;
        res=r;
        img=i;
    }
    void display()
    {
        // a + b i;
        cout<<"\n Given Complex Numbers: "<<res<<" + "<<img<<" i"<<endl;
    }
    ~complex()
    {
        cout<<"\n --> Destructor Executed destroy the class."<<endl;
    }
};
int main()
{
    complex({6,8}).display();
    complex({2,3}).display();
    return 0;
}
*/

class demo
{
    private:
    int res;
    int img;

    public:
    demo()  //Default Constructors.
    {
        res=5;
        img=7;
    }
    demo(int r, int i)
    {
        cout<<"\n ----------------------------------------------"<<endl;
        cout<<"\n --> Constructor Executed!"<<endl;
        res=r;
        img=i;
    }
    void display()
    {
        // a + b i;
        cout<<"\n --> Given Complex Number are: "<<res<<" + "<<img<<" i"<<endl;
    }
    ~demo()
    {
        cout<<"\n --> Destructor Executed Destroy the Class."<<endl;
    }
};
int main()
{
    demo({2,4}).display();  // Syntax: class_name({Parameters}).function_Name(Parameters);
    demo({5,7}).display();
    return 0;               // Anonymous Class Objects.
}
