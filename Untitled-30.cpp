#include<iostream>
#include<iomanip>
using namespace std;
int main()
{float fehr, cel;

    cout<<"\n-------------------------------Conversion of Fehrenheit into Celcius!------------------------\n";

    cout<<"\n 1. Enter the Temperature in terms of Fehrenheit: ";
    cin>>fehr;
    cout<<"\n 2. Now, Today's Temperature has been Recorded in Fehrenheit scale: "<<fehr<<endl;
    cel=(fehr-32)*5/9;
    cout<<"\n 3. Recorded Temperature in Celcius are given: "<<cel<<endl;
    
    cout<<"\n 4. Given Fehrenhiet in Foriegn Countries: "<<fehr<<" and in terms of Celcius: "<<cel<<endl;

    return 0;
}