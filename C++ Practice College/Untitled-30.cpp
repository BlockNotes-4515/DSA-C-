#include<iostream>
#include<iomanip>
using namespace std;

//Inline Function-This Function is used to Perform the Simple task because it stores the memory in Cache memeory.
//Inline Function- It is not capabale to perform the complex task because it takes lot of memeory, if you use complex programms,
                   //It will automatically converted into simple functions.

inline int sum(int a,int b)
{
    return(a+b);
}
inline int sub(int a,int b)
{
    return(a-b);
}
inline int mul(int a,int b)
{
    return(a*b);
}
int main()
{
    int a,b;

    cout<<"\n Name: Dhruv Dhayal"<<endl;
    cout<<"\n Enrollment Number: "<<endl;
    
    cout<<"\n 1. Enter the values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the Values of b: ";
    cin>>b;

    cout<<"\n-----------------------Resulting Output!------------------\n"<<endl;

    cout<<"\n (i). Given Addition are: "<<sum(a,b);
    cout<<"\n\n (ii). Given Substraction are: "<<sub(a,b);
    cout<<"\n\n (iii). Given Multiplication are: "<<mul(a,b);
    return 0;
}