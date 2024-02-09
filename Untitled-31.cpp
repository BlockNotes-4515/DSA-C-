#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int num1;

    cout<<"\n---------------------------------Leap Year Program!----------------------------\n";

    cout<<"\n 1. Enter the Number in order to check it is a Leap Year or not: ";
    cin>>num1;
    cout<<"\n 2. Given Number Choosen By the User are: "<<num1<<endl;

    if(num1%400==0 || num1%4==0 && num1%100!=0)
    {
        cout<<"\n 3. The Given Year Is a Leap Year: "<<num1<<endl;
    }
    else
    {
        cout<<"\n 3. No, Entered Year by the user is not a Leap Year: "<<num1<<endl;
    }
    return 0;
}