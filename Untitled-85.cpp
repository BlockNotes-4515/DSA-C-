#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class test
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
}