#include<iostream>
#include<iomanip>
using namespace std;
int a, b;
void swap(int* a, int* b)  //Call by Reference Technique!.
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cout<<"\n 1. Enter the values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the values of b: ";
    cin>>b;
    cout<<"\n User Entered values are a = "<<a<<" and the values of b = "<<b<<endl;
    cout<<"\n Now Before swapping the values of : "<<a<<" and the values of "<<b<<" here!"<<endl;
    swap(&a,&b);
    cout<<"\n After Swapping the values we, get : "<<a<<" and the value of "<<b<<" given!"<<endl;
    
    return 0;
}