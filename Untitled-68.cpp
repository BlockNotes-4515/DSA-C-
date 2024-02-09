#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void add(int a,int b)
{
    cout<<"\n 1. Sum of Two variables: "<<(a+b)<<endl;
}
void add(double a,double b)
{
    cout<<"\n 2. Sum of the floating variables: "<<(a+b)<<endl;
}
int main()
{
    add(11,11);
    add(24.5,67.8);

    return 0;
}