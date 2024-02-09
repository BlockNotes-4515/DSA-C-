#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
 
/*class sum
{
    private:
    int a;
    int b;

    public:
    void setdata(int a1, int b1);
    void outdata();
};
void sum::setdata(int a1, int b1)
{
    a=a1;
    b=b1;
}
void sum::outdata()
{
    int sum=a+b;
    cout<<"\n ----> 2. Getting the Sum of: "<<a<<" and "<<b<<" are: "<<sum<<endl;
}
int main()
{
    sum s1;

    s1.setdata(1,2);
    cout<<"\n -->1. Given Sum of a+b are given here!"<<endl;
    s1.outdata();

    return 0;

}*/
class sum
{
    private:
    int a;
    int b;

    public:
    void setdata(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void outdata()
    {
        int sum=(a+b);
        cout<<"\n ----> 2. The Sum of: "<<a<<" and "<<b<<" are: "<<sum<<endl;
    }
};
int main()
{
    sum s1;

    s1.setdata(12,24);
    cout<<"\n --> 1. Sum of the 'a' and 'b' are given here!"<<endl;
    s1.outdata();

    return 0;
}