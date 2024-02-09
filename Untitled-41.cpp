#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class employee
{
    private:
    int a,b,c;

    public:
    int d,e;

    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout<<"\n 1. The Values of a: "<<a<<endl;
        cout<<"\n 2. The Values of b: "<<b<<endl;
        cout<<"\n 3. The Values of c: "<<c<<endl;
        cout<<"\n 4. The Values of d: "<<d<<endl;
        cout<<"\n 5. The Values of e: "<<e<<endl;
    }
};
void employee::setdata(int a1,int b1, int c1)   //Declaring Member Function Outside the Class.
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee ep;
    ep.setdata(1,2,3);
    ep.d=45;
    ep.e=90;
    ep.getdata();

    return 0;
}