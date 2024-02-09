#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class factorial
{
    private:
    int num;

    public:
    void setdata()
    {
        cout<<"\n 1. Enter the Number here to find its factorial: ";
        cin>>num;
        cout<<"\n 2. Your Choosen Number is here: "<<num<<endl;
    }
    void outdata()
    {
        int fact=1;
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        cout<<"\n 3. The Choosen Number are: "<<num<<" and its Factorial are: "<<fact<<endl;
    }
};
int main()
{
    factorial f1;

    f1.setdata();
    cout<<"\n-------------Given Factorial Program!-------------\n";
    f1.outdata();

    return 0;
}
