#include<iostream>
#include<iomanip>
using namespace std;

class max
{
    private:
    int num[10];

    public:
    void getdata();
    friend int find(max);
};
void max::getdata()
{
    cout<<"\n 1. Enter the '10' Numbers in a given list are: ";
    for(int i=0;i<10;i++)
    {
        cin>>num[i];
    }
}
int find(max m1)
{
    cout<<"\n 2. Finding  the Maximum number among the  ten Numbers (Maximum)!"<<endl;
    for(int i=0;i<10;i++)
    {
        if(m1.num>m1.num[i])
        {
            cout<<m1.num;
        }
    }
}
int main()
{
    max mo;
    mo.getdata();
    cout<<find(mo);

    return 0;
}