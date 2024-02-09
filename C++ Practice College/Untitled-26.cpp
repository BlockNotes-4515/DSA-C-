#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int num1;

    cout<<"\n--------------------------------Leap Year!--------------------------------\n";

    cout<<"\n 1. Enter the Year to check whether it is leap year or not: ";
    cin>>num1;
    cout<<"\n 2. Entered Year by the User are as given: "<<num1<<endl;

    if(num1%400==0 || num1%4==0 && num1%100!=0)
    {
        cout<<"\n 3. Given Year entered by user: "<<num1<<" is a leap year!"<<endl;
    }
    else
    {
        cout<<"\n 4. No, Given Year is: "<<num1<<" is not a leap Year!"<<endl;
    }
    return 0;
}