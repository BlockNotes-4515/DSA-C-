#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int num1, i;
 int count=0;

    cout<<"\n--------------------------------Prime Numbers!---------------------------\n";

    cout<<"\n 1. Enter the Number in order to check wether it is Prime/or not: ";
    cin>>num1;
    cout<<"\n 2. The Number Choosen by the User in order to get it Prime/ or not: "<<num1<<endl;

    for(i=2;i<=num1;i++)
    {
        if(num1%i==0)
        {
            count=count+1;
        }
    }
    if(count==1)
    {
        cout<<"\n 3. The Given Number: "<<num1<<" is a Prime Number!"<<endl;
    }
    else
    {
        cout<<"\n 3. No, Given Number: "<<num1<<" is not a Prime Number!"<<endl;
    }
    return 0;
}