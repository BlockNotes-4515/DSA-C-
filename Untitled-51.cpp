#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class square
{
    private:
    int a;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the Values last limit of range: ";
        cin>>a;
        cout<<"\n 2. Choosen Values by the User are: "<<a<<endl;
    }
    void outdata()
    {
        cout<<"\n 3. Now! we find the Square in a given range set by the user!"<<endl;
        for(int i=1;i<=a;i++)
        {
           cout<<"\t"<<(i*i)<<endl;
        }
    }
    void display()
    {
        cout<<"\n 4. Square of the last limit: "<<a<<" is been given here!"<<endl;
    }
};
int main()
{
    square sq;
    sq.setdata();
    sq.outdata();
    sq.display();

    return 0;
}