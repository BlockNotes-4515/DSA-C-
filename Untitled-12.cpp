#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int i, j;

    cout<<"\n----------------------------------Quiz Time in C++!---------------------------\n";

    cout<<"\n Show all the tables in the coming range of (21-25)!"<<endl;
    for(i=21;i<=26;i++)
    {
        for(j=1;j<=10;j++)
        {
            cout<<i<<" * "<<j<<" = "<<j*i<<endl;;
        }
        cout<<endl;
    }
    
    cout<<"\n----------------------------Printing the table of 6! only!-----------------------\n";
    for(i=6;i<=8;i++)
    {
        for(j=1;j<=10;j++)
        {
            cout<<i<<" * "<<j<<" = "<<j*i<<endl;
        }
        cout<<endl;
    }
    return 0;
}