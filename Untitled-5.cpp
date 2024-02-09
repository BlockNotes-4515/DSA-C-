#include<iostream>
using namespace std;
int main()
{int num1;

    cout<<"\n---------------------Checking natute of a Numbers!----------------------\n";

    cout<<"\n 1. Enter the value of the Number in order to check the nature: ",
    cin>>num1;

    if(num1>0)
    {
        cout<<"\n ->  The Number is found to be (Positive): "<<num1<<endl;
    }
    else if(num1<0)
    {
        cout<<"\n -> The Number is found to be (Negative): "<<num1<<endl;
    }
    else
    {
        cout<<"\n -> The Number is found to be 0 (Zero): "<<num1<<endl;
    }
    return 0;
}