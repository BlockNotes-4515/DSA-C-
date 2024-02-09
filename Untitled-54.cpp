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
        int no;
        string name;
        int ID;

        public:
        void setdata()
        {
            cout<<"\n 1. Enter the Total Students available in the Class: ";
            cin>>no;
            cout<<"\n 2. Enter the Common Id of the College: ";
            cin>>ID;
            for(int i=0;i<=no;i++)
            {
                cout<<"\n @@ Enter the Name of the Student: ";
                cin>>name;
            }
        }
        void outdata()
        {
            cout<<"\n 3. Id common between colleges are: "<<ID<<endl;
            cout<<"\n 4. Total Students Available there in the College are: "<<no<<endl;
            for(int i=0;i<=no;i++)
            {
                cout<<"\n Name of the Registered Students are: "<<name<<endl;
            }
        }
    };
};
int main()
{
    cout<<"\n-------------------------Nested Classes!--------------------\n";

    person::student obj;
    obj.setdata();
    obj.outdata();

    return 0;
}