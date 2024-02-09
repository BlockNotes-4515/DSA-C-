#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// operator overloadinf by using the friend functions.
/*
class test
{
    private:
    int a,b,c;

    public:
    test()
    {
        a=b=c=0;
    }
    test(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"\n --> Values of a: "<<a<<endl;
        cout<<"\n --> Values of b: "<<b<<endl;
        cout<<"\n --> Values of c: "<<c<<endl;
    }
    friend test operator++(test &obj);
    friend test operator++(test &obj,int);
};
test operator++(test &obj)
{
    obj.a++;
    obj.b++;
    obj.c++;
    return obj;
}
test operator++(test &obj,int)
{
    obj.a++;
    obj.b++;
    obj.c++;
    return obj;
}
int main()
{
    test t1(1,2,3);
    t1.display();
    ++t1;
    cout<<"\n --> After pre-Increment!"<<endl;
    t1.display();
    t1++;
    cout<<"\n --> After the Post-Increment!"<<endl;
    t1.display();
    return 0;
}*/

// -------------------- pre-Increment! -------------------------

class test
{
    private:
    int a;
    int b;
    int c;

    public:
    test()
    {
        a=b=c=0;
    }
    test(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"\n --> Values of a: "<<a<<endl;
        cout<<"\n --> Values of b: "<<b<<endl;
        cout<<"\n --> Values of c: "<<c<<endl;
    }
    friend test operator++(test &obj);
    friend test operator++(test &obj,int);
};
test operator++(test &obj)
{
    obj.a++;
    obj.b++;
    obj.c++;
    return obj;
}
test operator++(test &obj,int)
{
    obj.a++;
    obj.b++;
    obj.c++;
    return obj;
}
int main()
{
    test t1(4,5,6);
    cout<<"\n----- Before Values!"<<endl;
    t1.display();
    ++t1;
    cout<<"\n ----------> Pre-Increment! <----------"<<endl;
    t1.display();
    t1++;
    cout<<"\n ----------> Post-Increment! <----------"<<endl;
    t1.display();
    return 0;
}
