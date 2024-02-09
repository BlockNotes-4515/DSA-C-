#include<iostream>
#include<iomanip>
using namespace std;  
int main()
{int a=34;
 int x=99, y=100, z=102;

    cout<<"\n---------------------Constants in C++!--------------------\n";
    int b=90;
    cout<<"\n 1. The valus of a are: "<<a<<endl;
    cout<<"\n 2. The value of b are: "<<b<<endl;

    //Constant-The value which is not going to be change/changeable, it is fixed, static or as well as stationary.

    cout<<"\n-----------------------Manipulators! in C++!------------------------\n";
    
    //Manipulators-It is included by header file #include<iomanip>, which allows the setw(9) the user to give spce on the basis of its size.
    //It simply removes inconvincy use of Escape sequences of '\t' , in place we uses setw(size given by user space b/w words).

    cout<<"\n\t Without Setw manipulators.\n"<<endl;

    cout<<"\n 1. The value of x: "<<x<<" without setw are: "<<x<<endl;
    cout<<"\n 2. The value of y: "<<y<<" without setw are: "<<y<<endl;
    cout<<"\n 3. The value of z: "<<z<<" without setw are: "<<z<<endl;

    cout<<"\n Using the Setw Manipulators!\n"<<endl;
    cout<<"\n 4. The value of x: "<<setw(5)<<x<<" with setw are: "<<x<<endl;
    cout<<"\n 5. The value of y: "<<setw(5)<<y<<" with setw are: "<<y<<endl;
    cout<<"\n 6. The value of z: "<<setw(5)<<z<<" with setw are: "<<z<<endl;

    cout<<"\n-------------------------------Operator precedence!----------------------\n";
    int d=5, m=9;
    int c=((((a*5)+5)-45)+87);
    cout<<"\n The value of the c: "<<setw(2)<<c<<"Using the values!"<<endl;

    return 0;
}
