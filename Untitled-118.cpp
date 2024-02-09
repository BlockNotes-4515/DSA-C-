#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class plane
{
    public:
    int phn,num;
    string name,age,start,end,ID,passport;
    string mail;
    char section;
    double first=5799.67;
    double buissness=3998.12;
    double general=2256.78;

    public:
    void setdata()
    {
        cout<<"\n----------------------------Welcome to British Airways!-----------------------------\n"<<endl;

        cout<<"\n 1. Enter the Passenger Name & Contact Details: ";
        cin>>name>>phn;
        cout<<"\n 2. Enter the age of "<<name<<" is: ";
        cin>>age;
        cout<<"\n 3. Enter the Departure Port: ";
        cin>>start;
        cout<<"\n 4. Enter the Arrival Port: ";
        cin>>end;
        cout<<"\n 5. Now, "<<name<<" plz enter your (ID with Passport): ";
        cin>>ID>>passport;
        cout<<"\n 6. Total Number of Passenger: ";
        cin>>num;
        cout<<"\n 7. Enter your G-mail ID: ";
        cin>>mail;
    }
    void getdata()
    {
        cout<<"\n-----------------------------Verifying Passenger Details!----------------------------\n"<<endl;

        cout<<"\n | --> Name of the Passenger is: "<<name<<" of ID: "<<ID<<endl;
        cout<<"\n | --> Enter the class you want to travel(General-G/g,Buissness-B/b,First-F/f): ";
        cin>>section;
        if(section=='G' || section=='g')
        {
            cout<<"\n | --> (Per-Person) Fare Price Rate in (General Class): "<<general<<endl;
            if(num>=2 &&  num<=5)
            {
                for(int i=0;i<=num;i++)
                {
                    general=general+500;
                }
                cout<<"\n | --> Your General class ticket (Total Price): "<<num<<" is: "<<general<<endl;
            }
        }
        else if(section=='B' || section=='b')
        {
            cout<<"\n | --> (Per-Person) Fare Price Rate in (Buissness Class): "<<buissness<<endl;
            if(num>=2 &&  num<=5)
            {
                for(int i=0;i<=num;i++)
                {
                    buissness=buissness+1000;
                }
                cout<<"\n | --> Your Buissness class ticket (Total Price): "<<num<<" is: "<<buissness<<endl;
            }
        }
        else if(section=='f' || section=='F')
        {
            cout<<"\n | --> (Per-Person) Fare Price Rate in (First Class): "<<first<<endl;
            if(num>=2 &&  num<=5)
            {
                for(int i=0;i<=num;i++)
                {
                    first=first+15000;
                }
                cout<<"\n | --> Your First class ticket (Total Price): "<<num<<" is: "<<first<<endl;
            }
        }
        else
        {
            cout<<"\n | --> Re-enter the details properly!"<<endl;
        }
    }
    void show()
    {
       cout<<"\n-----------------------------------Booking Boarding jai Hind!------------------------------\n"<<endl;

       char choice;
       cout<<"\n | ->> Sure, you have to book this(ticket or not)(Yes-Y/y or No-N/n): ";
       cin>>choice;
       if(choice=='y'||choice=='Y')
       {
         cout<<"\n----------------------------|Sucessfully Booked|"<<endl;
         cout<<"\n | --> Name of Passenger: "<<name<<" ID: "<<ID<<endl;
         cout<<"\n | --> "<<name<<" Contact Number is: "<<phn<<" Mail-ID: "<<mail<<endl;
         cout<<"\n | --> Boarding from: "<<start<<" -> <- "<<end<<endl;
         cout<<"\n-------------------------------------Govermentof India!---------------------------------------\n"<<endl;
       }
       else if(choice=='n'|| choice=='N')
       {
         char check;
         cout<<"\n | --> Sure, you want to cancel the trip/bookings(Y,y/N,n): ";
         cin>>check;
         if(check=='Y'||check=='y')
         {
            cout<<"\n | --> Sucessfully cancelled the ticket , Payment has been refunded within(15-Days)!"<<endl;
         }
         else if(check=='N' || check=='n')
         {
            cout<<"\n | --> Enter the Application Detils, Traveller's Responsibility!"<<endl;
         }
         else
         {
            cout<<"\n | --> Visit Again ! No, Bookings for your side of no-response!"<<endl;
         }
       }
    }
};
int main()
{
   plane p1;

   p1.setdata();
   p1.getdata();
   p1.show();

   return 0;
}