#include<iostream>
#include<iomanip>
using namespace std;
int main()
{float b, p, h;

    cout<<"\n----------------------------Checking the Triangle is Right-Angled or not?--------------------\n";

    cout<<"\n 1. Enter the Base of the Triangle: ";
    cin>>b;
    cout<<"\n 2. Enter the Perpendicular Side of the Triangle: ";
    cin>>p;
    cout<<"\n 3. Enter the Longest Hypotenuese Side of the Triangle: ";
    cin>>h;
    cout<<"\n 4. Given Base: "<<b<<" Perpendicular side: "<<p<<" as well its Hypotenuese: "<<h<<endl;

    if(p*2==h*2+b*2 || h*2==p*2+b*2 || b*2==p*2+h*2)
    {
        cout<<"\n Yes! Triangle is a Right-Angled Triangle!"<<endl;
    }
    else
    {
        cout<<"\n No, Given Sides don't Match hence it is not a Right-Angled triangle!"<<endl;
    }
    return 0;
}