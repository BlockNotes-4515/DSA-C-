#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*Using the Nested Member Functions

  ----->Define:    The Member Functions Used and call within the another functions of the same class is
                   called "Nested Member Functions".

  ----->Exception:  We, uses the '.' Operators as well as use the full name of that particular member Function which you
                    want to use in another member functions!.*/
                
/*lass binary
{
    private:
    string name;

    public:
    void setdata();
    void outdata();
};
void binary::setdata()
{
    cout<<"\n 1. Enter Your Name here: ";
    cin>>name;
}
void binary::outdata()
{
    cout<<"\n 2. Entered Name by the User are: "<<name<<endl;
}
int main()
{
    binary b1;
    b1.setdata();
    b1.outdata();

    return 0;
}*/
/*class binary
{
    private:
    int bin;
    int i;

    public:
    void calcualtion()
    {
        if(bin!=0 || bin!=1)
        {
            cout<<"\n The Number is incorrect Binary Format: "<<bin<<endl;
        }
        else
        {
            cout<<"\n Number is Aceeptable ans in Correct Format: "<<bin<<endl;
        }
    }
    void setdata()
    {
        cout<<"\n 1. Enter the Binary Number in '1' or '0': ";
        cin>>bin;
    }
    void outdata()
    {
        cout<<"\n 2. Entered Bnary Number by the User to check: "<<bin<<endl;
        int boy;
        boy=calculation();
        cout<<"\n 3. The Values check it is binary or not? : "<<boy<<endl;
        cout<<endl;
    }
};
int main()
{
    binary b1;
    b1.setdata();
    b1.outdata();

    return 0;
}*/
/*class binary
{
    private:
    int bin;
    int i;

    public:
    void calculation()
    {
        if(bin!=0 || bin!=1)
        {
            cout<<"\n Incorrect Binary Format: "<<bin<<" not Aceeptable!"<<endl;
        }
        else
        {
            cout<<"\n Correct Binary Format: "<<bin<<" Aceeptable!"<<endl;
        }
    }
    void setdata()
    {
        cout<<"\n 1. Enter the Binary Number in terms of '1' or '0': ";
        cin>>bin;
    }
    void outdata()
    {
        cout<<"\n 2. Entered Number by the User are: "<<bin<<" make sure to enter!"<<endl;
        int bag;
        bag=calculation();
        cout<<"\n 3. The Binary Format are shown: "<<bag<<endl;
    }
};
int main()
{
    binary b1;
   // b1.calculation();  We, did not use because we uses this function in another member function called as nested member functions!.
    b1.setdata();
    b1.outdata();

    return 0;
}*/
class binary
{
    private:
    string number;

    public:
    void read(void);
    void chk_bin(void);
    void convert(void);
    void display(void);
};
void binary::read(void)
{
    cout<<"\n 1. Enter the Binary Number here: ";
    cin>>number;
}
void binary::chk_bin(void)
{
    cout<<"\n 2. Checkig the Values you entered: "<<number<<" is in the Binary Format or Not?"<<endl;
    for(int i=0;i<=number.length();i++)
    {
    if(number.at(i)!='0' && number.at(i)!='1')
    {
        cout<<"\n --> Invalid Binary Format: "<<number<<" not Acceptable Sorry!";
        cout<<endl;
        exit(0);
    }
    }
}
void binary::convert(void)
{
    for(int i=0;i<=number.length();i++)
    {
        if(number.at(i)=='0')
        {
            number.at(i)='1';
        }
        else
        {
            number.at(i)='0';
        }
    }
}
void binary::display(void)
{
    cout<<"\n --> Displaying all the Values of the BInary Numbers!";
    for(int i=0;i<=number.length();i++)
    {
        cout<<number.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b1;
    b1.read();
    b1.chk_bin();
    b1.convert();
    b1.display();

    return 0;
}