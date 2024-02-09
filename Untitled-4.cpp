#include<iostream>
using namespace std;
int main()
{int num1;

    cout<<"\n---------------------------Even/Odd!-----------------------\n";
    cout<<"\n Checking the Number is Found to be Even / Odd Values!"<<endl;
    
    cout<<"\n 1. Enter the Values of a Number to check whether it is Even/Odd: ";
    cin>>num1;

    if(num1%2==0)
    {
        cout<<"\n The given Number is found to be (Even): "<<num1<<endl;
    }
    else
    {
        cout<<"\n Now, the given Number is found to be Odd: "<<num1<<endl;
    }
    return 0;
}