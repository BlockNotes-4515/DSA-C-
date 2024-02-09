#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"\n------------------------------Using the Setw!--------------------------\n";
    cout<<"\n Name: Dhruv Dhayal\n";
    cout<<"\n Enrollment No: 0633702022\n";


    cout<<"\n 1. For, setw we used to give space by using the header files <iomail>\n";
    cout<<"\n 2. It, refers to how much space you want to give in between the words bu giving actuall values."<<endl;

    cout<<"\n 3. You can see the  given space by setw!"<<setw(5)<<"You can see the space of '5' in between!"<<setw(6)<<"XYZ"<<endl;
    return 0;
}