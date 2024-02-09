#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int a, b;
    cout<<"\n Swapping of Two Variable without using the Third variables! \n";

    cout<<"\n 1. Enter the value of a: ";
    cin>>a;
    cout<<"\n 2. Enter the value of b: ";
    cin>>b;
    cout<<"\n 3. Before Swapping the values of a: "<<a<<" and the values of b: "<<b<<endl;
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n 4. After Swapping the Value of a: "<<a<<" and the values of b: "<<b<<endl;

    return 0;
}