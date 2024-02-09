#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class demo
{
    private:
    int n,total=0;
    int marks,avg,perc;
    char grade;

    public:
    void setdata()
    {
        cout<<"\n--------------------- Application Forms! -----------------------------"<<endl;
       
        cout<<"\n 1. How, many subjects marks you want to enter: ";
        cin>>n;
        cout<<"\n 2. Enter the marks in total subjects: "<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"\n --> Enter the marks in subject ["<<i+1<<"] are: ";
            cin>>marks[i];
        }
    }
    void display()
    {
        cout<<"\n--------------------- Results! -------------------------------"<<endl;

        cout<<"\n 1. Total Subjects: "<<n<<" marks!"<<endl;
        cout<<"\n 2. Marks in all Subjects!"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"\n --> Marks of all subject: "<<i+1<<" are: "<<marks[i]<<endl;
            total=total+marks[i];
        }
        avg=(total)/n;
        perc=(total/n*100)*100;
        cout<<"\n 3. Average marks are: "<<avg<<endl;
        cout<<"\n 4. Total Percentage: "<<perc<<endl;
    }
    /*try
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\n --> Enter the marks in subject ["<<i<<"] are: ";
            cin>>marks[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<"\n --> Marks of all subject: "<<i<<" are: "<<marks[i]<<endl;
            total=total+marks[i];
        }
        through marks[i]
    }
    catch(double marks[i])
    {
       cout<<"\n --> Exception is: "<<marks[i]<<endl;
    }*/
};
int main()
{
    demo d;
    /*d.setdata();
    d.display();*/
    return 0;

    cout<<"\n--------------------- Exceptional Handling! -----------------------"<<endl;
    *try
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\n --> Enter the marks in subject ["<<i<<"] are: ";
            cin>>marks[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<"\n --> Marks of all subject: "<<i<<" are: "<<marks[i]<<endl;
            total=total+marks[i];
        }
        throw marks[i]
    }
    catch(double marks[i])
    {
       cout<<"\n --> Exception is: "<<marks[i]<<endl;
    }
}