#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class score
{
    private:
    int roll_no;
    int SIZE=5;
    int marks;

    public:
    void setdata();
    void outdata();
};
void score::setdata()
{
    cout<<"\n 1. Enter Your Roll_Number here: ";
    cin>>roll_no;
    for(int i=0;i<=SIZE;i++)
    {
        cout<<"\n ----> Enter the Marks of the Subject: ";
        cin>>marks;
    }
}
void score::outdata()
{
    int total=0;

    cout<<"\n 2. Entered Roll Number by the Student are: "<<roll_no<<endl;
    cout<<"\n 3. Now! Calculating the Total Marks here!"<<endl;
    for(int i=0;i<=SIZE;i++)
    {
        total+=marks;
    }
    cout<<"\n 4. Total Marks in all: "<<SIZE<<" Subjects are: "<<total;
}
int main()
{
    score obj1;
    obj1.setdata();
    obj1.outdata();

    return 0;
}*/
class score
{
    private:
    int roll_no;
    int marks;
    int SIZE=5;
    
    public:
    void setdata();
    void outdata();
};
void score::setdata()
{
    cout<<"\n-----------------------------------Array With The Objects!--------------------------\n";
    
    cout<<"\n 1. Enter Your Roll_Number here: ";
    cin>>roll_no;
    for(int i=0;i<=SIZE;i++)
    {
        cout<<"\n ----> Enter the marks of your Subjects: ";
        cin>>marks;          //total+=marks[i]; We, also use this method also! : )
    }
}
void score::outdata()
{
    cout<<"\n-----------------------------------Displaying The Data which is being Fetched!------------\n";

    cout<<"\n 2. Entered Roll_Number by the User are: "<<roll_no<<endl;
    int total=0;
    for(int i=0;i<=SIZE;i++)
    {
        total=total+marks;  //total+=marks[i]; We, also use this method also! : )
    }
    cout<<"\n 3. Total Marks in all: "<<SIZE<<" the Subjects are: "<<total<<endl;
}
int main()
{
    score obj1;
    obj1.setdata();
    obj1.outdata();

    return 0;
}