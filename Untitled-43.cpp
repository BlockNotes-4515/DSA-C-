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
    void setdata(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void outdata()
    {
        int sum=0;
        sum=(a+b);
        cout<<"\n 2.----> Total Sum of: "<<a<<" and "<<b<<" are: "<<sum<<endl;
    }
};
int main()
{
    sum s1;

    s1.setdata(14,14);
    cout<<"\n 1. --> Getting the Total Sum is Given Below!"<<endl;
    s1.outdata();

    return 0;
}*/

/*class factorial
{
    private:
    int num;

    public:
    void setdata( int num1)
    {
        num=num1;
    }
    void outdata()
    {
        int fact=1;

        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        cout<<"\n --> Choosen Number are: "<<num<<" and its fcatorial are: "<<fact<<endl;
    }
};

int main()
{
    factorial fact;
    fact.setdata(5);
    cout<<"\n -->Here! You can get the Fcatorial of the Given Numbers!"<<endl;
    fact.outdata();

    return 0;
}*/

class factorial
{
    public:
    int num;

    void setdata(int num1);
    void outdata();
};
void factorial::setdata(int num1)
{
    num=num1;
}
void factorial::outdata()
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"\n --> 2. Choosen Number are: "<<num<<" and its Factorial are: "<<fact<<endl;
    cout<<endl;
}

int main()
{
    factorial f1;

    f1.setdata(5);
    cout<<"\n --> 1. You ca See the Fcatorial Program Given Below!"<<endl;
    f1.outdata();

    return 0;
}