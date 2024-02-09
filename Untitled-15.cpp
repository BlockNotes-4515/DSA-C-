#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"\n------------------------------------Arrrays in C++!----------------------------------\n";
    int arr[10], i, n;

    cout<<"\n 1. How many items you want to enter out of 10 n: ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
    cout<<"\n @ Enter the Element in an array are: ";
    cin>>arr[i];
    }
    for(i=0;i<=n;i++)
    {
    cout<<"\n # Entered items by the user in an array are: "<<arr[i]<<endl;
    }

    cout<<"\n------------------------------------Arrays format in C++!-------------------------------\n";
    cout<<"\n Challenge Accepted!"<<endl;

    int mathmarks[4];

    mathmarks[0]=900;
    mathmarks[1]=786;
    mathmarks[2]=24;
    mathmarks[3]=9120;

    cout<<"\n These are the marks !"<<endl;
    cout<<"\n Given marks a the Index number 1 are: "<<mathmarks[0]<<endl;
    cout<<"\n Given marks a the Index number 2 are: "<<mathmarks[1]<<endl;
    cout<<"\n Given marks a the Index number 3 are: "<<mathmarks[2]<<endl;
    cout<<"\n Given marks a the Index number 4 are: "<<mathmarks[3]<<endl;
     cout<<endl;
     for(i=0;i<=4;i++)
     {
        cout<<"\n My marks in mark-sheet: "<<setw(2)<<i<<setw(2)<<" are as given :"<<mathmarks[i]<<endl;
     }

    //Pointers ans Arrays.
    cout<<"\n-------------------------------------Arrays with Pointers!------------------------------\n";
     int marks[7]={24,56,67,78,89,90,100};
     int *p=marks;
     cout<<*(p++);
     cout<<*p;
     //Difference between them!;
     cout<<"\n Total given form of the marks are: "<<marks;

    return 0;

}