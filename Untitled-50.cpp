#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
    public:
    class student
    {
       private:
       int roll_no;
       int ID;
       string name;

       public:
       void setdata()
       {
         cout<<"\n 1. Enter your Roll-No: ";
         cin>>roll_no;
         cout<<"\n 2. Enter your ID: ";
         cin>>ID;
         cout<<"\n 3. Enter Your Name here: ";
         cin>>name;
       }
       void outdata()
       {
        cout<<"\n 4. Your Given Name is: "<<name<<" with roll_no: "<<roll_no<<" and your ID: "<<ID<<endl;
        cout<<endl;
       }
    };
};
int main()
{
    cout<<"\n @@ Now! You can see the Examples of the Nested Class!"<<endl;
    person::student obj;
    obj.setdata();
    obj.outdata();

    return 0;
}