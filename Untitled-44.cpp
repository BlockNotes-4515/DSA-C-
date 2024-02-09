#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class factorial
{
    public:
    int num;

    public:
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
    cout<<"\n ----> 2. Your Choosen Number are: "<<num<<" and its factorial are: "<<fact<<endl;
    cout<<endl;
}

int main()
{
    factorial f1;

    f1.setdata(5);
    cout<<"\n ----> 1. The Factorial program is given here!"<<endl;
    f1.outdata();

    return 0;
}*/
class sum
{
    private:
    int num1, num2;
    int sum=0;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the First Number are: ";
        cin>>num1;
        cout<<"\n 2. Enter the Second Number are: ";
        cin>>num2;
    }
    void calculate()
    {
        sum=(num1+num2);
    }
    void outdata()
    {
        cout<<"\n 3. Sum of Two Number: "<<num1<<" and "<<num2<<" are: "<<sum<<endl;
    }
};

int main()
{
    sum s1;

    s1.setdata();
    s1.calculate();
    s1.outdata();

    return 0;
}