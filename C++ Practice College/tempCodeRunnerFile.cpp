#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

inline int Sum(int a,int b)
{
    return (a+b);
}
inline int Diff(int a, int b)
{
    return (a-b);
}
inline int Mult(int a,int b)
{
    return (a*b);
}
inline int Div(int a,int b)
{
    return (a/b);
}
inline int Modulus(int a,int b)
{
    return (a%b);
}
int main()
{
    int a,b;

    cout<<"\n Name: Dhruv Dhayal"<<endl;
    cout<<"\n Enrollment No: 06313702022"<<endl;

    cout<<"\n --> Enter the First Number are: ";
    cin>>a;
    cout<<"\n --> Enter the Second Number are: ";
    cin>>b;
    
    cout<<"\n------------------------Output Result!----------------------\n"<<endl;
    
    cout<<"\n 1. Addition of "<<a<<" + "<<b<<" = "<<Sum(a,b)<<endl;
    cout<<"\n 2. Substraction of "<<a<<" - "<<b<<" = "<<Diff(a,b)<<endl;
    cout<<"\n 3. Multiplication of "<<a<<" * "<<b<<" = "<<Mult(a,b)<<endl;
    cout<<"\n 4. Divisin of "<<a<<" / "<<b<<" = "<<Div(a,b)<<endl;
    cout<<"\n 5. Modulus of "<<a<<" % "<<b<<" = "<<Modulus(a,b)<<endl;

    return 0;
}