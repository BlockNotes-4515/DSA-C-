#include<iostream>
#include<iomanip>
using namespace std;
int num1;

int fact(num1)
{
    cout<<"\n Showing the factorial of the Number By using the Functions!"<<endl;
    int fact=1, i;
    for(i=1;i<=num1;i++)
    {
        fact=fact*i;
    }
    cout<<"\n The factorial of the Number: "<<num1<<endl;
    cout<<"\n The Number choosen are: "<<num1<<" and its fcatorial are: "<<fact<<endl;
    return 0;
}
int main()
{
    int num1;
    cout<<"\n 1. Enter the Number to find its factorial values: ";
    cin>>num1;
    cout<<"\n 2. The Number choosen by the user are: "<<num1;
    cout<<"\n 3. For its factorial we can get: "<<fact(num1);
    return 0;
}
