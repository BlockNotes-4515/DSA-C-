#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class prime
{
    private:
    int num;
    int count=0;

    public:
    void setdata();
    void outdata();
};
void prime::setdata()
{
    cout<<"\n 1. Enter the Number to check it is (Prime/Not-Prime): ";
    cin>>num;
}
void prime::outdata()
{   
   

    cout<<"\n 2. Choosen Number by the User are: "<<num<<endl;
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count=count+1;
        }
    }
    if(count==1)
    {
        cout<<"\n --> Yes, Given Number is a Prime Number: "<<num<<endl;
    }
    else
    {
        cout<<"\n --> No, Given Number is not a Prime Number: "<<num<<endl;
    }
}
int main()
{
    prime p1;

    p1.setdata();
    p1.outdata();

    return 0;
}