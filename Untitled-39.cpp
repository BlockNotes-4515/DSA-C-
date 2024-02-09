#include<iostream>
#include<iomanip>
using namespace std;

class sum
{
    private:
    int num1;
    int num2;

    public:
    void enter_sum()
    {
        cout<<"\n 1. Enter the First Number are: ";
        cin>>num1;
        cout<<"\n 2. Enter the Second Number are: ";
        cin>>num2;
    }
    void display()
    {
        cout<<"\n  --> Total Sum are: "<<num1+num2<<endl;
        cout<<endl;
    }
};
int main()
{
    sum s1,s2;
    cout<<"\n --> Given Form of Summing values!"<<endl;
    s1.display();
    s2.display();

    return 0;
}