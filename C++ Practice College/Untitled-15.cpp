#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int i, j, rows, k;

    cout<<"\n---------------------------Pyramid Structures by using the For-Loop!----------------------\n";
    cout<<"\n Name: Dhruv Dhayal!\n";
    cout<<"\n Enrollment No: 0633702022\n";
    cout<<"\n We, used to show a pyramid structures by using the for-loop and by showing with values!"<<setw(2)<<" * values shown in pyramid!"<<endl;

    cout<<"\n 1. The values of the Pyramid given by the user-input!\n";

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
     {
        for(j = 1; j <= rows-i; ++j)
         {
            cout <<"  ";
        }

        while(k != 2*i-1) 
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}