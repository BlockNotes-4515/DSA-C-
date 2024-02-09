#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class booking
{
    private:
    string name;
    int Total;
    int phn;
    int price=100;
    string mail;
    string dept,arr;
     
    public:
    void setdata()
    {
        cout<<"\n---------------------------Application Form Bookings Details!---------------------\n"<<endl;

        cout<<"\n 1. Enter the name here: ";
        cin>>name;
        cout<<"\n 2. Enter your phone_Number: ";
        cin>>phn;
        cout<<"\n 3. Total Passenger are: ";
        cin>>Total;
        cout<<"\n 4. Enter your E-mail ID: ";
        cin>>mail;
        cout<<"\n 5. Enter the Departure Station here: ";
        cin>>dept;
        cout<<"\n 6. Enter the Arrival Station are: ";
        cin>>arr;
    }
    void getdata()
    {
        char choice;
        cout<<"\n--> You! are sure you want to book this ticket(Y|N) ";
        cin>>choice;
        if(choice=='y'|| choice=='Y')
        {
            cout<<"\n---------------------------Sucessfully Booked!--------------------------\n"<<endl;

            cout<<"\n | --> Name of the Passenger: "<<name<<endl;
            cout<<"\n | --> Phone_Number/Contact Details: "<<phn<<endl;
            cout<<"\n | --> Total Passenger travelling: "<<Total<<endl;
            cout<<"\n | --> E-mail ID of a Passenger are: "<<mail<<endl;
            cout<<"\n | --> You Fare Ticker-Price are: "<<price;
            cout<<endl;
            cout<<"\n-----------------------Your Station!----------------------\n";

            cout<<"\n |--> Your Train Name: Rajdhani Express!"<<endl;
            cout<<"\n |--> Train Number are: 4515DA67/78f45"<<endl;
            cout<<"\n |--> Plateform Number are: 2"<<endl;
            cout<<"\n |--> Your Departure and Arrival Station are: "<<dept<<"->"<<arr<<endl;

            cout<<"\n\n--------------------------Goverment of India!-------------------------\n"<<endl;
        }
        else
        {
            char give;
            cout<<"\n--> Sure you did not want to book this ticket!(y|n): ";
            cin>>give;
            if(give=='y'||give=='n')
            {
                cout<<"\n --> @Your! Booking has been sucessfully terminated!"<<endl;
            }
            else
            {
                cout<<"\n --> @ Go, back and fill the form again!"<<endl;
            }
        }
    }
};
int main()
{
    booking bg;
    bg.setdata();
    bg.getdata();

    return 0;
}
*/
class book
{
    private:
    string name;
    string start,end;
    int phn;
    double price=890.78,pr=250.67;
    string mail;
    int total, plateform;

    public:
    void setdata()
    {
        cout<<"\n------------------------------------Application Booking Forms!----------------------------\n"<<endl;

        cout<<"\n 1. Enter Name of the Passenger: ";
        cin>>name;
        cout<<"\n 2. Enter the E-mail ID of "<<name<<" are: ";
        cin>>mail;
        cout<<"\n 3. Enter the Contact Details here: ";
        cin>>phn;
        cout<<"\n 4. Book the starting station are: ";
        cin>>start;
        cout<<"\n 5. Book your Destination Station are: ";
        cin>>end;
        cout<<"\n 6. Total Number of Passenger are: ";
        cin>>total;
    }
    void getdata()
    {
        char choice;
        cout<<"\n | Sure you want to book the Ticket , and wanted your verification: ";
        cin>>choice;
        if(choice=='y'|| choice=='Y')
        {
            cout<<"\n-------------------------Ticket Successfully Booked!------------------------\n"<<endl;

            cout<<"\n ----------------------------------| Verifications! | @Co."<<endl;
            cout<<"\n | Name of the Passenger are: "<<name<<endl;
            cout<<"\n | E-mail ID Details of an Passenger are: "<<mail<<endl;
            cout<<"\n | Contact Details of "<<name<<" are: "<<phn<<endl;
            cout<<"\n | Total Number of Passenger are: "<<total<<endl;
            cout<<"\n | Your Starting Station are: "<<start<<endl;
            cout<<"\n | Your Destination Station are: "<<end<<endl;
            
            cout<<"\n--------------------------Booked Reservation Ticket!-------------------------\n"<<endl;

            cout<<"\n -->Your Train Name is: Rajdhani Express"<<endl;
            cout<<"\n -->Your Train Number is: 45150DGAF9010"<<setw(2)<<" color -> Blue-Line"<<endl;
            if(total>2 && total<=5)
            {
                cout<<"\n --> | Your Plateform Number is: 2"<<endl;
                cout<<"\n --> | Your Fare ticket-price is: "<<price<<endl;
            }
            else
            {
                cout<<"\n --> | Your Plateform Number is: 4"<<endl;
                cout<<"\n --> | Your Fare-ticket price is: "<<pr<<endl;
            }
        }
        else
        {
            char give;
            cout<<"\n -->| Are? You want to terminate you ticket(y/n): ";
            cin>>give;
            if(give=='y' || give=='Y')
            {
                cout<<"\n --> Your ticket has been terminated, You will get refund-ammount in 2 Days!"<<endl;
            }
            else
            {
                cout<<"\n --> Go, back and again fill the form!"<<endl;
            }
        }
    }
};
int main()
{
    book obj1;

    obj1.setdata();
    obj1.getdata();

    return 0;
}