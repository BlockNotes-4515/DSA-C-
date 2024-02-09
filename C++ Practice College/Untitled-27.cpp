#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int up,down;
 int num1, i;

    cout<<"\n----------------------------------Leap Year in a Given------------------------\n"; 

    cout<<"\n 1. Enter the values of Upper Bound Range: ";
    cin>>up;
    cout<<"\n 2. Enter the Values of Lower Bound Range: ";
    cin>>down;
    cout<<"\n 3. The Values of Upper Range: "<<up<<" and the Lower range: "<<down;

    for(i=up;i<=down;i++)
    {
        if(i%400==0 || i%4==0 && i%100!=0)
        {
            cout<<"\n\t"<<i;
        }
    }
    return 0;
}