#include<iostream>
using namespace std;
int main()
{float a=90.89;
 int b=20;
 int num1=99;
 float num2=89.90934;


    cout<<"\n---------------------------------Type-Conversion!----------------------\n";
    cout<<"\n Name: Dhruv Dhayal\n";
    cout<<"\n Enrollment No: 0633702022\n";

    cout<<"\n 1. Conversion of integer into floating number b to a: "<<int(a)<<endl;
    cout<<"\n 2. Conversion of floating number a: "<<float(a)<<endl;
    cout<<"\n 3. Conversion of integer into floating number b to a: "<<float(b)<<endl;
    cout<<"\n 4. Conversion of Floating into Integer number a: "<<int(float(a))<<endl;

    cout<<"\n-----------------------------------User-Input Explicit type-Casting!--------------------\n";
    cout<<"\n 1. Enter the Integer values: ";
    cin>>num1;

    cout<<"\n 2. Enter the floating point values: ";
    cin>>num2;

    cout<<"\n--------------Conversion of Integer to float and float to Ineger!------------------\n";
    cout<<"\n 1. Conversion of integer number num1  "<<int(num1)<<endl;
    cout<<"\n 2. Conversion of floating number num2: "<<int(num2)<<endl;
    cout<<"\n 3. Conversion of integer into floating number num1: "<<float(num1)<<endl;
    cout<<"\n 1. Conversion of integer into floating number b to a: "<<int(float(num2))<<endl;
    return 0;
}