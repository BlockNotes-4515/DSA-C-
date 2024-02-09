#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int i, j, num1, k;

    cout<<"\n---------------------------Pyramid Structures by using the For-Loop!----------------------\n";

    cout<<"\n We, used to show a pyramid structures by using the for-loop!"<<setw(2)<<" * values shown in pyramid!"<<endl;

    cout<<"\n 1. The values of the Pyramid given by the user-input!\n";
    cout<<"\n 2. Enter the Number by the user to show pyramid by user-choice: ";
    cin>>num1;
    cout<<"\n 3. The user want to print the pyramid of this number: "<<num1<<endl;
    cout<<endl;

    for(int i=1, k=0; i<=num1; i++, k=0)
    {
        for(j=1;j<=num1-i;j++)
        {
            cout<<"  ";
        }
        do
        {
            cout<<" * ";
            k=k+1;

        }
        while(k!=2*i-1);
        cout<<endl;
        
    }
    return 0;

}