#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class student
{
    public:
    int roll_no;
    string name,section,college;
    int ID;

    public:
    void setdata()
    {
        cout<<"\n----------------- Student Details! ----------------------"<<endl;

        cout<<"\n 1. Enter the Name of a Student: ";
        cin>>name;
        cout<<"\n 2. Enter the Section & Roll_no here:  ";
        cin>>section>>roll_no;
        cout<<"\n 3. Enter the college name: ";
        cin>>college;
        cout<<"\n 5. Collge ID: ";
        cin>>ID;
    }
    void getdata()
    {
        cout<<"\n------------------- Student Informations! --------------------"<<endl;

        cout<<"\n --> Name of the Student: "<<name<<endl;
        cout<<"\n ID: "<<ID<<" & Roll No: "<<roll_no<<endl;
        cout<<"\n Roll_Number: "<<roll_no<<endl;
        cout<<"\n College: "<<college<<endl;
    }
};
class test:public student
{
    public:
    float avg,perc;
    int total=0,n;
    int marks[n];

    public:
    void putdata()
    {
        cout<<"\n------------------- Student Score Card!-------------------"<<endl;

        cout<<"\n 1. How, many marks you want to perform: ";
        cin>>n;
        cout<<"\n --> Enter the marks here!"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"\n || --> Enter the Marks of subject"<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void display()
    {
        cout<<"\n------------------------ Report Cards ! ----------------------"<<endl;

        cout<<"\n Name: "<<name<<" Id: "<<ID<<" Roll_No: "<<roll_no<<endl;
        cout<<"\n Total Marks scrored by student: "<<name<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"\n Marks of Subject "<<i+1<<" is: "<<marks[i]<<endl;
            total+=marks[i];
        }
        cout<<"\n --> Total Marks are: "<<total<<" in "<<n<<" subjects!"<<endl;
        perc=(static_cast<float>(total) / (n * 100)) * 100;
        avg=static_cast<float>(total)/n;
        cout<<"\n Average: "<<avg<<" and Percentage: "<<perc<<endl;
    }
};
class sports:public student
{
    public:
    void show()
    {
        cout<<"----------------- Sports Details! --------------------"<<endl;

        cout<<"\n 1. Name: "<<name<<endl;
        cout<<"\n 2. College: "<<college<<" ID: "<<ID<<" Roll No: "<<roll_no<<endl;
    }
};
class performance:public test,public sports
{
    public:
    void given()
    {
        cout<<"\n--------------- Overall Performance! --------------------"<<endl;

        cout<<"\n || Total Marks scored: "<<total<<endl;
        cout<<"\n || Average: "<<avg<<" Percentage: "<<perc<<endl;
        if(perc>=600)
        {
            cout<<"\n Put mre efforts!"<<endl;
        }
        else if(perc>700)
        {
            cout<<"\n Good Percentage!"<<endl;
        }
        else if(perc>800)
        {
            cout<<"\n Very Good Percentage!"<<endl;
        }
        else if(perc>900)
        {
            cout<<"\n Topper Excellent!"<<endl;
        }
        else
        {
            cout<<"\n Better luck next time!"<<endl;
        }
    }
};
int main()
{
    student s;
    s.setdata();
    s.getdata();

    test t;
    t.putdata();
    t.display();

    sports ss;
    ss.show();

    performance p;
    p.given();

    return 0;
}