#include<iostream>
#include<iomanip>
using namespace std;

cout<<"\n---------------------------------------Sum of two Numbers!---------------------------\n";

int sum(int a, int b)
{
    cout<<"\n 1. Again Sum of Two Variables by passing by values!"<<endl;
    int c;
    c=(a+b);
    cout<<"\n 2. Total Sum of "<<a<<" and "<<b<<" are given : "<<c<<endl;
    return c;
}
int main()
{
    cout<<"\n 3. The Sum of two numbers are: "<<sum(10,100);
    return 0;
}

cout<<"\n---------------------------------------Swapping of the two Numbers!---------------------------\n";

void swappointer(int* a, int* b)                         //Call By reference using with Pointers!
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=90, b=80;
    cout<<"\n 1. The Values of Numbers just Before swapping are: "<<a<<" and the value of b: "<<b<<endl;
    swappointer(&a,&b);
    cout<<"\n 2. The Values of Numbers just After swapping are: "<<a<<" and the value of b: "<<b<<endl;
    return 0;
}

//Call by reference Variables.
void swapreferencevar(int* a, int* b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2, b=3;
    cout<<"\n Before swapping the values of a: "<<a<<"and the values of b: "<<b<<endl;
    swapreferencevar(&a,&b);
    cout<<"\n After Swapping the values of a: "<<a<<" and the values of b: "<<b<<endl;
    return 0;
}

