#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class bookings
{
    private:
    int num;
    string name,null,mail;
    string arrival,departure;
    string start,end;
    int total;

    public:
    void setdata()
    {
        cout<<"\n---------------------------|Enter Application Details!|"<<endl;

        cout<<"\n | 1. Enter your Name here: ";
        cin>>name;
        cout<<"\n | 2. Enter the E-mail ID of "<<name<<" are: ";
        cin>>mail;
        cout<<"\n | 3. Enter your Contact Number: ";
        cin>>num;
        cout<<"\n | 4. Enter the Starting Station are: ";
        cin>>start;
        cout<<"\n | 5. Enter the ending stataion Destination are: ";
        cin>>end;
        cout<<"\n | 6. Total Number of Passengers are: ";
        cin>>total;
        for(int i=0;i<total;i++)
        {
            cout<<"\n | --> Enter the name of the Passenger"<<i<<" are: ";
            cin>>null;
        }
        double price=290.45;
        cout<<"\n | Average price (/per-person) is: "<<price<<" /INR"<<endl;
    }
    void getdata()
    {
        double price=290.45;
        cout<<"\n---------------------------|Confirmation Details!|"<<endl;

        cout<<"\n | Total Conditional Validity!|"<<endl;
        cout<<"\n | --> Name of the Passenger are: "<<name<<endl;
        for(int i=0;i<total;i++)
        {
            cout<<"\n | --> Name of the Passenger|"<<i<<" is: "<<null<<endl;
        }
        cout<<"\n | --> Caculating your total price is given here|"<<endl;
        for(int i=0;i<total;i++)
        {
             price=price+2;
        }
        char choice;

        cout<<"\n | --> Total Number of Passenger is: "<<total<<" and its price: "<<price<<endl;
        cout<<"\n | --> Ready to confirm your Bookings (Y/N): ";
        cin>>choice;
        if(choice=='Y'||choice=='y')
        {
            cout<<"\n\t|| Name of the Passenger(Linked-With): "<<name<<endl;
            for(int i=0;i<total;i++)
            {
                cout<<"\n\t|| Passenger "<<i<<" name is: "<<null<<endl;
            }
            cout<<"\n\t || Contact Number: "<<num<<" E-Mail ID: "<<mail<<endl;
            cout<<"\n\t || Total Number of Passengers: "<<total<<endl;
            cout<<"\n\t || Starting: "<<start<<" Ending: "<<end<<endl;
            cout<<"\n\t || Journey planned: "<<start<<"-><-"<<end<<" at price: "<<price<<endl;
        }
        else
        {
            cout<<"\n--------------------------------|Sure! for Cancellation!|"<<endl;

            char ch;
            cout<<"\n --> Sure, yu want to cancel this ticket(Y/N): ";
            cin>>ch;
            if(ch=='Y'||ch=='y')
            {
                cout<<"\n || Ok, Your Information has been secured||"<<endl;
                cout<<"\n || Sucessfully Cancelled the Bookings!||"<<endl;
                cout<<"\n ||-------------------Visit Again!-----------------||"<<endl;
            }
            else
            {
                cout<<"\n || Go, back and re-enter your details again!"<<endl;
            }
        }
    }
};
int main()
{
    bookings obj1;

    obj1.setdata();
    obj1.getdata();

    return 0;
}