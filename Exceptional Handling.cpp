#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int denominator,numerator,divide;

    cout<<"\n ---------------- Enter the Detailshere! ----------------------"<<endl;

    cout<<"\n 1. Enter the Numerator: ";
    cin>>numerator;
    cout<<"\n 2. Enter the Denominator: ";
    cin>>denominator;
    cout<<"\n --> Numerator: "<<numerator<<" and Denomenator: "<<denominator<<endl;

    try
    {
        if(denominator==0)
        {
            throw 0; //Not Executed if Denomenator is 0;
        }
        else
        {
            cout<<"\n --> After Division we get!"<<endl;
            divide=numerator/denominator;
            cout<<"\n --> Showing Division values: "<<divide<<endl;
        }
    }
    catch(int x)
    {
        cout<<"\n || Not-Defined denominator as '0' not acceptable!"<<endl;
    }
}