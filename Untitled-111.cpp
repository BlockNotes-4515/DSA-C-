#include<iostream>
#include<iomanip>
using namespace std;

class test
{
    private:
    int num;

    public:
    void setdata()
    {
        cout<<"\n --> Enter the Number you got in the subject: ";
        cin>>num;
    }
    void getdata()
    {
        cout<<"\n --> Marks you got in the subject: "<<num<<endl;
        if(num>=90)
        {
            cout<<"\n --> Grade in this subject with "<<num<<" are: "<<"A"<<endl;
        }
        else if(num>=80 && num<90)
        {
            cout<<"\n --> Grade in this subject with "<<num<<" are: "<<"B"<<endl;
        }
        else if(num>=70 && num<80)
        {
            cout<<"\n --> Grade in this subject with "<<num<<" are: "<<"C"<<endl;
        }
        else if(num>=60 && num<70)
        {
            cout<<"\n --> Grade in this subject with "<<num<<" are: "<<"D"<<endl;
        }
        else
        {
            cout<<"\n --> Grade in this subject with "<<num<<" are: "<<"F"<<endl;
        }
    }
};
int main()
{
    test t;
    t.setdata();
    t.getdata();

    return 0;
}