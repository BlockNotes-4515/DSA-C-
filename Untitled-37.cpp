#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class sum
{
    public:
    int num1, num2;

    void print_sum()
    {
        cout<<"\n 1. Enter the First Number: ";
        cin>>num1;
        cout<<"\n 2. Enter the Second Number: ";
        cin>>num2;
    }
    void display_sum();
};
class sum::display_sum()
{
    cout<<"\n 3. Sum of the Given Numbers are: "<<num1+num2<<endl;
    cout<<endl;
};

int main()
{
    sum s1;
    s1.print_sum();
    s1.display_sum();

    return 0;
}


    
    