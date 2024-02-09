/*Write a Program to Swap first and last digit of any numbers!*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class shopping
{
    private:
    string shop_list[5];
    int n;

    public:
    void setdata()
    {
        cout<<"\n 1. How, many item you want to  puchase: ";
        cin>>n;
        cout<<"\n 2. Enter the list of items you want: ";
        for(int i=0;i<=n;i++)
        {
            cin>>shop_list[i];
        }
    }
    void getdata()
    {
        cout<<"\n 3. Items you want to purchase: "<<n<<endl;
        cout<<"\n 4. Shopping List of our's is: "<<endl;
        for(int i=0;i<=n;i++)
        {
            cout<<endl;
            cout<<shop_list[i]<<endl;
        }
    }
};
int main()
{
    shopping s1;
    s1.setdata();
    s1.getdata();

    return 0;
}