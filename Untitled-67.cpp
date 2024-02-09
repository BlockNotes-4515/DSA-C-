#include<iostream>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int sum(int a, int b)
{
    // Function 'sum' takes two integer numbers as parameters.
    cout<<"\n-------------------------------Function Overloading in Sum() Functions!--------------------------\n"<<endl;

    cout<<"\n 1. Performing integer sum"<<endl;
    return a + b;
}

double sum(double a, double b) 
{
    // This function sum takes two numbers of type double as parameters.
    cout<<"\n 2. Performing floating sum"<<endl;
    return a + b;
}

int main() {
    // Creating function call to perform integer summation.
    int sum_1 = sum(5, 10);
    cout<<"\n --> 5 + 10 = "<<sum_1<<endl;
    
    // Creating function call to perform floating-point summation.
    double sum_2 = sum(5.0, 10.1);
    cout<<"\n --> 5.0 + 10.1 = "<<sum_2<<endl;
    
    return 0;
}

