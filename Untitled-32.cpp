#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int up, down;
 int num1, i;

    cout<<"\n--------------------------------Leap Year in a Given Range!---------------------\n";

    cout<<"\n 1. Enter the Values of Upper Range: ";
    cin>>up;
    cout<<"\n 2. Enter the Values of Lower Range: ";
    cin>>down;
    cout<<"\n 3. Now, The values of Upper_Range: "<<up<<" and the Values of Lower_Range: \n\t"<<down;

    for(i=up;i<=down;i++)
    {
        if(i%400==0 || i%4==0 && i%100!=0)
        {
            cout<<"\n\t"<<i;
        }
    }
    return 0;
}