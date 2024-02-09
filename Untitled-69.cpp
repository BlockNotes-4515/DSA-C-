#include<iostream>
#include<iomanip>
#include<string>
using namespace tsd;

void add(int a,int b)
{
    cout<<"\n 1. Sum of the Two Variables: "<<(a+b);
}
void add(float a,int c, double b)
{
    cout<<"\n 2. Sum of the Three Variables: "<<(a+b+c);
}
int main()
{
    add(24,56);
    add(12.5,36,44.7);

    return 0;
}