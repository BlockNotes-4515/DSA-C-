#include<iostream>
using namespace std;
int main()
{int i, num1,count=0;

    cout<<"Name: Dhruv Dhayal";
    cout<<"Enrollment No: 0633702022\n";
    
    cout<<"\n 1. Enter the Number to check it is prime or not?: ";
    cin>>num1;

    for(i=2;i<=num1;i++)
    {
        if(num1%2==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"\nIt is a prime number: "<<num1;
    }
    else{
        cout<<"\nIt is not a prime number: "<<num1;
    }
    return 0;
}