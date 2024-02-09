#include<iostream>
using namespace std;
int main()
{int num1, i;
 int fact=1;

    cout<<"\n----------------------------Factorial programms!------------------------\n";

    cout<<"\n 1. Enter the Number to check / finding the value of factorial: ";
    cin>>num1;
    fact=1;
    for(i=1;i<=num1;i++)
    {
        fact=fact*i;
    }
    cout<<"\n The Factorial of the given Number: "<<fact<<" Of given Number: "<<num1<<endl;
    return 0;

}