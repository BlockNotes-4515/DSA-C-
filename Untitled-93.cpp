#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Wikileaks
{
    private:
    int num;
    int pass;
    string name,gf;

    public:
    void getdata();
    friend int sample(Wikileaks);
    friend string leaks(Wikileaks);
};
void Wikileaks::getdata()
{
    cout<<"\n 1. Hello, By the way what is your name bro? ";
    cin>>name;
    cout<<"\n 2. Can you hell me i forgot my phone, i need to call it's urgent: ";
    cin>>num;
    cout<<"\n 3. PLaese! Open the Password, so Then I will call: ";
    cin>>pass;
    cout<<"\n 4. Who is your gf, by the way go and date her: ";
    cin>>gf;
}
int sample(Wikileaks w1)
{
    cout<<"\n --> His, phone number: "<<w1.num<<endl;
    cout<<"\n --> And his phone_Password: "<<w1.pass<<endl;
}
string leaks(Wikileaks w2)
{
    cout<<"\n --> Plz, dont't tell it to anyone his name is: "<<w2.name<<" and his gf is: "<<w2.gf<<endl;
    cout<<"\n They, bothe love each other!"<<endl;
}
int main()
{
    Wikileaks obj1;

    obj1.getdata();
    cout<<sample(obj1)<<endl;
    cout<<leaks(obj1)<<endl;

    return 0;
}