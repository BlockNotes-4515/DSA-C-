#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int x,y;
 cout<<"\n Name: Dhruv Dhayal"<<endl;
 cout<<"\n Enrollment No: 06313702022"<<endl;
 
 cout<<"\n 1. Enter the First Number x: ";
 cin>>x;
 cout<<"\n 2. Enter the Second Number y: ";
 cin>>y;   
 cout<<"\n --> Before Swapping values of x: "<<x<<" and y: "<<y<<endl;

 swap(&x, &y);  // passing value to function  
 cout<<"\n---------------------------------------------\n"<<endl;
 cout<<" --> Value of x is: "<<x<<endl;  
 cout<<"\n --> Value of y is: "<<y<<endl;  
 cout<<"\n --> After Swapping values of x: "<<x<<" and y: "<<y<<endl;

 return 0;  
}    