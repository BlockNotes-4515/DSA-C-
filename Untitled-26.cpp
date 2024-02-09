#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int a,b;

//We, swap the values of the variable without using the third variables means temp=0;

    cout<<"\n-----------------------------Swapping without using third Variables!-----------------------\n";

    cout<<"\n 1. Enter the First Values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the Second Values of b: ";
    cin>>b;
    cout<<"\n 3. Before Swapping the Values of a: "<<a<<" and the values of b: "<<b<<" given here!"<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n 4. After Swapping the Values of a: "<<a<<" and the values of b: "<<b<<" are getting Swapped!"<<endl;

    return 0;
}