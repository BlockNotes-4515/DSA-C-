#include<iostream>
#include<iomanip>
using namespace std;

cout<<"\n--------------------------------------First Functions!------------------------------\n";
int a,b,c;
                                                                         //Defining a Function - Formal Arguments.
int sum(int a, int b)                                                   //Function(Function_name) Arguments
{
    cout<<"\n The Sum of the two variables!"<<endl;
    int c;
    c=(a+b);
    cout<<"\n Total Sum of "<<a<<" and "<<b" are: "<<c<<endl;
    cout<<"\n Total Sum are: "<<c;
    return c;
}
int main()
{
    int a,b;
    cout<<"\n 1. Enter the values of a: ";                             //Calling a Function - Actual arguments.
    cin>>a;
    cout<<"\n 2. Enter the Values of b: ";
    cin>>b;
    cout<<"\n The Sum between two are: "<<sum(a,b);
    
    return 0;
}

cout<<"\n--------------------------------------Second Functions!------------------------------\n";
int a,b,c,d;

int sum(int a, int b, int c)
{
    int d;
    cout<<"\n The Sum of the Three Variables!"<<endl;
    d=(a+b+c);
    cout<<"\n Total Sum between them are: "<<d;
    cout<<"\n Now! After adding we will get: "<<a<<" + "<<b<<" +  "<<c<<" = "<<d;
    return d;
}
int main()
{
    int a,b,c;
    cout<<"\n 1. Enter the Values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the Values of b: ";
    cin>>b;
    cout<<"\n 3. Enter the Values of c: ";
    cin>>c;
    cout<<"\n\n Total sum of three-Variables are: "<<sum(a,b,c);
    
    return 0;
}

cout<<"\n--------------------------------------Third Functions!------------------------------\n";
int num1;

int fact(num1)
{
    cout<<"\n The Factorial Programms!";
    int fact=1, i;
    for(i=1;i<=num1;i++)
    {
        fact=fact*i;
    }
    cout<<"\n The Choossen Number are: "<<num1<<" and its Factorial are: "<<fact<<endl;
    return fact;
}
int main()
{
    int num1;
    cout<<"\n Enter the Value of Number in order to find its factorial: ";
    cin>>num1;
    cout<<"\n Given Number taken by the user are: "<<num1<<endl;
    cout<<"\n Factorial of the num1: "<<num1<<" are given: "<<fact(num1);
    return fact;
}

