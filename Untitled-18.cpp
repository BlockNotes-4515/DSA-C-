#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int arr2da[3][3];
 int arr2db[3][3];
 int  arr2dc[3][3];
 int  r, c;

    cout<<"\n------------------------Addition of the Matrix!-------------------\n";

    cout<<"\n 1. Enter all the 9 elements in First Matrix are: ";
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>arr2da[r][c];
        }
    }
    cout<<endl;
    //Seperating the code-segment to form proper indentataion.

    cout<<"\n @. Now! First Matrix look like this!\n"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cout<<arr2da[r][c]<<"  ";
        }
        cout<<endl;
    }

    cout<<"\n 2. Enter all the 9 elements in second matrix now: ";
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>arr2b[r][c];
        }
    }
    cout<<endl;
    //seperating for indentataion;

    cout<<"\n @@ Printing and showing the Second matrix given below!\n"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cout<<arr2db[r][c]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"\n 3. Now! Adding of the two matrix are as given below!\n"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            arr2dc[r][c]=(arr2da[r][c]+arr2db[r][c]);
        }
    }
    cout<<"\n 4. Addition of the two matrix are as given below!\n"<<endl;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cout<<arr2dc[r][c]<<"  ";
        }
        cout<<endl;
    }
    return 0;
    
}