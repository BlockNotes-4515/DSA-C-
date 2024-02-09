#include<iostream>
using namespace std;
int main()
{int num1, i;
 int count=0;

    cout<<"\n-------------------------------Prime Numbers!-----------------------\n";

    cout<<"\n 1. Enter the Number in order to check whether it is prime or not? :  ";
    cin>>num1;
    cout<<"\n 2. Entered number by the user are: "<<num1<<endl;

    for(i=2;i<=num1;i++)
    {
        if(num1%2==0)
        {
            count++;

        }
    }
    if(count==0)
    {
        cout<<"\n 3. The Number is found to be Prime Numbers: "<<num1<<endl;
    }
    else
    {
        cout<<"\n 3. No, the Number is not found to be prime:  "<<num1<<endl;
    }
    return 0;
}