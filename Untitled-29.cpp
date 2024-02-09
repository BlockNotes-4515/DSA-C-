#include<iostream>
#include<iomanip>
using namespace std;
int main()
{float cel, fehr;

    cout<<"\n-----------------------------Conversion of Celcius into Fehrenheit!------------------------\n";

    cout<<"\n 1. Enter the Temperature in celcius: ";
    cin>>cel;
    cout<<"\n 2. Today's Temperatutre has been recorded are: "<<cel<<endl;
    fehr=(9/5)*cel+32;
    cout<<"\n 3. Now, The values Temperature in Fehrenheit: "<<fehr<<endl;

    cout<<"\n 4. In India Celcius temperature is: "<<cel<<" and in U.S.A Fehrenheit scale are: "<<fehr<<endl;

    return 0;
}