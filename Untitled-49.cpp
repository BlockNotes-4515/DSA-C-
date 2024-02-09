#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class hello
{
    public:
    class student
    {
        private:
        int no;
        string name;

        public:
        void setdata()
        {
            cout<<"\n 1. Enter the Total Number of Students: ";
            cin>>no;
            for(int i=0;i<=no;i++)
            {
                cout<<"\n @ Enter Your Name here: ";
                cin>>name;
            }
        }
        void outdata()
        {
            cout<<"\n Total Students in a class: "<<no<<endl;
            for(int i=0;i<=no;i++)
            {
                cout<<"\n Entered names by the student are: "<<name<<endl;
                cout<<endl;
            }
        }
    };
};
int main()
{
    cout<<"\n Now! You can, see the Further Totalm Student Names!"<<endl;
    hello::student obj;
    obj.setdata();
    obj.outdata();

    return  0;
}