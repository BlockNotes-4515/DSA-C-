#include<iostream>
#include<iomanip>
using namespace std;

    int power(int m,int n)
    {
        int pos=1;
        for(int i=0;i<n;i++)
        {
            pos=pos*m;
        }
         return pos;
    }
int main()
{
    int m,n;

    cout<<"\n 1. Enter the Base: ";
    cin>>m;
    cout<<"\n 2. Enter how many times you raise the power: ";
    cin>>n;
    cout<<"\n --> Values of the Number are: "<<m<<" and its Power n: "<<n<<endl;
    for(int i=0;i<n;i++)
        {
            cout<<m<<" * ";
        }
        
        cout<<" : "<<power(m,n);

    return 0;
}