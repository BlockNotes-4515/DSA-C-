#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int count=0;
 int num1, i;

    cout<<"\n-----------------------------Prime Numbers!------------------------\n";

    cout<<"\n 1. Enter the Number to check it is Prime or not: ";
    cin>>num1;
    cout<<"\n 2. Entered Number by the user are given: "<<num1;
    cout<<endl;
    for(i=2;i<=num1;i++)
    {
        if(num1%i==0)
        {
            count=count+1;
        }
    }
    if(count==1)
    {
        cout<<"\n --> Given Number: "<<num1<<" is a Prime Number!"<<endl;
    }
    else
    {
        cout<<"\n --> Given Number: "<<num1<<" is not a Prime Number!"<<endl;
    }
    return 0;

}