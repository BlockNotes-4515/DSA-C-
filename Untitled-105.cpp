#include<windows.h>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Login Forms- Used to login by teacher(Admin).Student.Guest.etc/ By, using the Classes.

class Forms
{
    private:
    int password;
    string username,gmail;
    string student_name;
    int choice;

    public:
    void setdata()
    {
        cout<<"\n---------------------Welcome to Login-Page!---------------------------\n"<<endl;

        cout<<setw(7)<<"\n\t --> You, want to login!"<<endl;
        cout<<setw(7)<<"\n 1. Admin : )"<<endl;
        cout<<setw(7)<<"\n 2. Student : ="<<endl;
        cout<<setw(7)<<"\n 3. Exit :|"<<endl;
        cout<<setw(7)<<"\n --> Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"\n----------------------------Welcome to the Desk! Admin(User)"<<endl;

                cout<<"\n (i). Enter the Usename here:: ";
                cin>>username;
                cout<<"\n (ii). Enter the Password:: ";
                cin>>password;
                cout<<"\n (iii). Enter your mail-ID:: ";
                cin>>gmail;
            }
            break;
            case 2:
            {
                cout<<"\n----------------------------Welcome to the Desk! Student."<<endl;

                cout<<"\n (i). Enter the Username here:: ";
                cin>>username;
                cout<<"\n (ii). Enter the Student_RollNumber:: ";
                cin>>password;
                cout<<"\n (iii). Enter the Mail-ID here:: ";
                cin>>gmail;
            }
            break;
            case 3:
            {
                cout<<"\n @ Thanks! For Visiting any enquiry refer: 4515 Emergency code."<<endl;
            }
            break;
            default:
            {
                cout<<"\n --> Sorry! Wrong Choice has been entered , plz try again!"<<endl;
            }
            break;
        }
    }
    void getdata()
    {
        cout<<"\n-------------------------Login Details!------------------------------\n"<<endl;

        if(choice==1)
        {
        cout<<"\n--------------------Admin!"<<endl;

        cout<<"\n\t -> User_Name: "<<username<<endl;
        cout<<"\n\t -> Password: "<<password<<endl;
        cout<<"\n\t -> Gmail Id: "<<gmail<<endl;
        cout<<"\n\t --> "<<username<<" has been sucessfully Logged!"<<endl;
        }
        if(choice==2)
        {
            cout<<"\n-------------------Student!"<<endl;
            cout<<"\n\t -> Student_name: "<<username<<endl;
            cout<<"\n\t -> Password(Roll_Number): "<<password<<endl;
            cout<<"\n\t -> Gmail-Id: "<<gmail<<endl;
            cout<<"\n\t ---> "<<username<<" hase been logged successfully!"<<endl;
        }
        if(choice==3)
        {
            cout<<"\n --> No, Data has been fetched, because of user's exit!!"<<endl;
        }
    }
};
int main()
{
    Forms f1;
    f1.setdata();
    f1.getdata();

    return 0;
}