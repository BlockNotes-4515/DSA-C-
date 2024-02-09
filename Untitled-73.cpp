#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class CAccount
{
    private:
    int accountNumber;
    float accountBalance;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter your Account_Number: ";
        cin>>accountNumber;
        cout<<"\n 2. Enter the Account_Balance: ";
        cin>>accountBalance;
    }
    void outdata()
    {
        char choice;
        int deposit, withdraw;
      

        cout<<"\n 3. Your Account_Number: "<<accountNumber<<endl;
        cout<<"\n -----> Current balance in your Acoount is: "<<accountBalance<<endl;
        cout<<"\n -----> Do, You want to Deposit ->press('D'), or you want to Withdraw ->press('W'): ";
        cin>>choice;
        if(choice=='D' || choice=='d')
        {
             cout<<"\n ----> Deposit How much amount you want to Deposit: ";
             cin>>deposit;

             cout<<"\n--------------------Sucessfully Added!--------------------\n";

             cout<<"\n 1. Your Account Number is: "<<accountNumber<<endl;
             cout<<"\n 2. Your Current Account Balance Updated (Deposited): "<<accountBalance+deposit<<endl;

             cout<<"\n-------------------------*******--------------------------\n";
        }
        else if(choice=='W' || choice=='w')
        {
             cout<<"\n ----> Withdraw! How, much ammount you want to Withdraw: ";
             cin>>withdraw;

             cout<<"\n--------------------Sucessfully Added!--------------------\n";

             cout<<"\n 1. Your Account Number is: "<<accountNumber<<endl;
             cout<<"\n 2. Your Current Account Balance Updated (Withdrawed): "<<accountBalance-deposit<<endl;

             cout<<"\n-------------------------*******--------------------------\n";
         }
        else
        {
            cout<<"\n sorry! Wrong choice has been entered!";
        }
    }
};

int main()
{
    CAccount obj;
    obj.setdata();
    obj.outdata();

    return 0;
}