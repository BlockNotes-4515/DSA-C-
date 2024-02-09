#include <iostream>
#include<iomanip>
using namespace std;

class Swapper 
{
    public:
    // Function to swap two integer values using call by reference
    void swapByReference(int &a, int &b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // Function to swap two integer values using pointers and return a reference
    int& swapByPointer(int &a, int &b) 
    {
        int temp = a;
        a = b;
        b = temp;
        return a; // Returning a reference to 'a'
    }
};

int main() 
{
    Swapper s1;

    int x,y;

    cout<<"\n Name: Dhruv Dhayal"<<endl;
    cout<<"\n Enrollment No: 06313702022"<<endl;

    cout<<"\n 1. Enter the First Number 1: ";
    cin>>x;
    cout<<"\n 2. Enter the Second Number 2: ";
    cin>>y;

    cout << "\n --> Before Swapping the values of x: "<<x<<" and y: "<<y<<endl;

    // Swap using call by reference
    s1.swapByReference(x,y);

    cout<<"\n --> The values of x is: "<<x<<endl;
    cout<<"\n --> The Values of y is: "<<y<<endl;

    cout << "\n --> After Swapping the Values of x: "<<x<<" and y: "<<y<<endl;

    int num1=10,num2=55;

    cout << "\n --> Before Swapping the values of num1: "<<num1<<" and num2 is: "<<num2<<endl;

    // Swap using pointers and return by reference
    int &result = s1.swapByPointer(num1, num2);

    cout << "\n --> After swapping using pointers and return by reference num1: "<<num1<<" and num2: "<<num2<<endl;

    // Result will be a reference to num3
    cout << "\n --> Result reference: " << result <<endl;

    return 0;
}
