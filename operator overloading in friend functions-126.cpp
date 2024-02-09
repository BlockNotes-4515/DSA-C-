// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Test
{
    int a,b,c;
    public:
    Test()
    {
        a=b=c=0;
    }
    Test(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    
    void Display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    
    friend Test operator++(Test &obj);
    friend Test operator++(Test &obj,int);
};

Test operator++(Test &obj)
{
    obj.a++;
    obj.b++;
    obj.c++;
    return obj;
}
Test operator++(Test &obj,int)
{
    obj.a++;
    obj.b++;
    obj.c++;
    return obj;
}
int main() {
    Test t1(4,5,1);
    t1.Display();
    ++t1;
    cout<<"\n pre- increment"<<endl;
    t1.Display();
    t1++;
    cout<<"\n Post-Increment!"<<endl;
    t1.Display();
    return 0;
}
