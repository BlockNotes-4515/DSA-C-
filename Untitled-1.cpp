#include<iostream>
using namespace std;
int main()
{int num1,num2;

    cout<<"\nThere are two types of herader files!\n";
    cout<<"\nSystem compiler: It comes from the header files! compiler\n";
    cout<<"\nUser defined header files: It comes from the programmer!\n";
    cout<<"hello"<<endl; //Endl-means the end of that particular line.
    cout<<"hi!";

    cout<<"\n------------------------------------------------Operators in C++!-----------------------------\n";
    cout<<"\n Q1. Enter the First Number: ";
    cin>>num1;

    cout<<"\n Q2. Enter the Second Number: ";
    cin>>num2;

    cout<<"\n 1. Addition: "<<num1+num2;
    cout<<"\n 2. Substraction: "<<num1-num2;
    cout<<"\n 3. Multiplication: "<<num1*num2;
    cout<<"\n 4. Division: "<<num1/num2;
    cout<<"\n 5. Modulous: "<<num1%num2;

    cout<<"\n***************Assignment Operators!\n";
    cout<<"\n -Used to assign values to the variables.\n";
    cout<<"\n Examples: a=99, b=100\n";

    cout<<"\n***************Comparison Operators!\n";
    cout<<"\n The value of num1==num2"<<(num1==num2)<<endl;
    cout<<"\n The value of num1>=num2"<<(num1>=num2)<<endl;
    cout<<"\n The value of num1<=num2"<<(num1<=num2)<<endl;
    cout<<"\n The value of num1!=num2"<<(num1!=num2)<<endl; //Not equal to.
    cout<<"\n The value of num1>num2"<<(num1>num2)<<endl;
    cout<<"\n The value of num1<num2"<<(num1<num2)<<endl;
    //cout<<"\n The value of num1><num2"<<(num1><num2)<<endl;// Not equal to.

    cout<<"\n****************Logical Operators!\n";
    int a=8,b=8;
    cout<<"\n The value of logical operators: "<<((a==b) && (a>=b))<<endl;
    cout<<"\n The value of logical operators: "<<((a!=b) && (a>=b))<<endl;
    cout<<"\n The value of logical operators: "<<((a>b) && (a<b))<<endl;
    cout<<"\n The value of logical operators: "<<((a>=b) && (a<=b))<<endl;  //endl-is used to give the next line in C++.
    
    return 0;
}