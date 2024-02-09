#include<iostream>
#include<iomanip>
using namespace std;

inline float square(float x)
{
    x=x*x;
    return (x);
}
int main()
{
    float num;
    cout<<"\n 1. Enter the Number in order to find its square: ";
    cin>>num;
    cout<<"\n 2. Square of the Given Num: "<<num<<" are here: "<<square(num);
    return 0;
}