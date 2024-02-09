#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class nest
{
    private:
    int a;

    public:
    void sqr_num()
    {
        return (a*a);
    }
    void setdata()
    {
        cout<<"\n 1. Enter the Values of a: ";
        cin>>a;
    }
    void outdata()
    {
        int sq=sqr_num();
        cout<<"\n 2. Now, Square of the Number: "<<a<<" are: "<<sq<<endl;
        cout<<endl;
    }
};
int main()
{
    nest n1;
    n1.setdata();
    n1.outdata();

    return 0;
}