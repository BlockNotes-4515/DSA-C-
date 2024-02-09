#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int num1,num2,num3;

    cout<<"\n-----------------------------Largest Of the Three Numbers!-------------------\n";

    cout<<"\n 1. Enter the Values of First Number Num1: ";
    cin>>num1;
    cout<<"\n 2. Enter the Values of Second Number Num2: ";
    cin>>num2;
    cout<<"\n 3. Enter the Values of Third Number Num3: ";
    cin>>num3;
    cout<<"\n 4. Given Number are: "<<num1<<" second one is: "<<num2<<" and last one is: "<<num3<<endl;
    if(num1>0 && num2>0 && num3>0)
    {
        if(num1>num2 && num1>num3)
        {
            cout<<"\n--> First Number is the Greatest: "<<num1<<" than second: "<<num2<<" and the third: "<<num3<<endl;
        }
        else if(num2>num1 && num2>num3)
        {
             cout<<"\n--> Second Number is the Greatest: "<<num2<<" than First: "<<num1<<" and the third: "<<num3<<endl;
        }
        else
        {
             cout<<"\n--> Third Number is the Greatest: "<<num3<<" than second: "<<num2<<" and the First: "<<num1<<endl;
        }
    }
    return 0;
}