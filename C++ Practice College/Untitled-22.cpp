#include<iostream>
#include<iomanip>
using namespace std;

class Swapping
{
     public:
     int x,y;

     public:
     void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
};

int main()
{
    Swapping s1;
    int x,y;

    cout<<"\n Name: Dhruv Dhayal"<<endl;
    cout<<"\n Enrollment No: 06313702022"<<endl;

    cout<<"\n 1. Enter the First Number x: ";
    cin>>x;
    cout<<"\n 2. Enter the Second Number y: ";
    cin>>y;
    cout<<"\n --> Before Swapping Values of x: "<<x<<" and y: "<<y<<endl;

    s1.swap(&x, &y);
    cout<<"\n------------------------------------------------"<<endl;
    cout<<"\n 1. The Values of x: "<<x<<endl;
    cout<<"\n 2. The Values of y: "<<y<<endl;
    cout<<"\n --> After Swapping Values of x: "<<x<<" and y: "<<y<<endl;


    return 0;
}
r