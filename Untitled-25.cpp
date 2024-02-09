#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int a,b;
 int temp=0;

    cout<<"\n------------------------------------Swapping of the two Variables!-----------------------\n";

    cout<<"\n 1. Enter the First Values a: ";
    cin>>a;
    cout<<"\n 2. Enter the Second Values of b: ";
    cin>>b;
    cout<<"\n 3. Before Swapping the values of a: "<<a<<" and the values of b: "<<b<<" given here!"<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n 4. After The Swapping the values of a: "<<a<<" and the value of b: "<<b<<" are getting Swapped!"<<endl;

    return 0;
}