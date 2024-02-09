#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int arr2d[3][3], r, c;

    cout<<"\n------------------------------Representing Array Matrix in C++!-----------------\n";
    
    cout<<"\n 1. Enter the items/elements  9 in an array: ";
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>arr2d[r][c];
        }
    }
    cout<<endl;
    //Seperating the line;

    cout<<"\n 2. Printing the matrix of our first matrix are give below!\n"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cout<<arr2d[r][c]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}