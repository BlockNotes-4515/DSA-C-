#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int i;

    cout<<"\n Break-The break statement is used to exit the loop in between on the basis of conditions are called breaking the loop!\n"<<endl;

    for(i=0;i<=10;i++)
    {
        cout<<i<<endl;
        if(i==8)
        break;
    }

    cout<<"\n Continue-The Continue statement is used to skips that value and jumps it into the next iteration to the loop!\n"<<endl;
    for(i=0;i<=10;i++)
    {
        cout<<i<<endl;
        if(i==5)
        continue;
    }
    return 0;
}