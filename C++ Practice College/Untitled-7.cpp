#include<iostream>
using namespace std;
int main()
{int num1;
    cout<<"Name: Dhruv Dhayal";
    cout<<"Enrollment No: 0633702022\n";
    
    cout<<"\n 1. Enter the Number in order to check it is Even/ODD: ";
    cin>>num1;

    if(num1%2==0)
    {
        cout<<"\n The Choosen Number is found to be EVEN: "<<num1;
    }
    else
    {
        cout<<"\n The choosen number is ODD: "<<num1;
    }
    return 0;
}
