#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class array_object
{
    private:
    int salary;
    int id;

    public:
    void setdata();
    void outdata();
};
void array_object::setdata()
{
    cout<<"\n 1. Enter your salary: ";
    cin>>salary;
    cout<<"\n 2. Enter your current Id: ";
    cin>>id;
}
void array_object::outdata()
{
    cout<<"\n 3. Entered Id by the User are: "<<id<<endl;
    cout<<"\n 4. Entered salary: "<<salary<<" by the user with the ID: "<<id<<endl;
}
int main()
{
    array_object hy

    for(int i=0;i<=5;i++)
    {
        hy[i].setdata();
        hy[i].outdata();
    }
    return 0;
}*/
class shop
{
    private:
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter{counter=0;}
    void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
}; 
void shop::getPrice(void)
{
    cout<<"\n 1. Enter Id of your item: ";
    cin>>itemId[counter];
    cout<<"\n 2. Enter Price of that Item: ";
    cin>>itemPrice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        count<<"\n ----> The Price of item with Id: "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop s1;
    s1.initCounter();
    s1.setPrice();
    s1.setPrice();
    s1.displayPrice();

    return 0;

}

