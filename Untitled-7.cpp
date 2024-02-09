#include<iostream>
using namespace std;
int main()
{int num1, i;
 int sum=0;

    cout<<"\n--------------------Sum of the 'n' Numbers!-----------------\n";

    cout<<"\n 1. Enter the Number in  order to find their actual sum: ";
    cin>>num1;
    cout<<"\n 2. Given Number choosen by the user are: "<<num1<<endl;

    for(i=0;i<=num1;i++)
    {
        sum=sum+i;
    }
    cout<<"\n 3. Given Total sum is: "<<sum<<endl;
    cout<<"\n 4. Choosen number by the user are: "<<num1<<" and its total actual sum are: "<<sum<<endl;

    return 0;
}