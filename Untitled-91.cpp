#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/* Friend Function -1. Yes, it is not the part of a class, but it is used to allow the 
                    memeber function outside the class having right to acess the 
                    private/protected data member their private data will going
                    to be easily acessible.
                    
                    2. It, does not call member_name directly, we need to pass the 
                       Object of a class with (.) dot-memebership Operators.
                       
                    3. It is not a part of a class, it simply give the Function_Declaration
                       inside the Class, but defination will always given Outside the 
                       class.
                    
                    4. Compiler allows the member function outside the class to acess the 
                       private data of data-memeber inside the class, by only checking
                       by 'friend' keyword!.
                    */
class Sum
{
    private:
    int a;
    int b;

    public:
    void setdata();
    friend int sum(Sum);
};
void Sum::setdata()
{
    cout<<"\n 1. Enter the First Number (a): ";
    cin>>a;
    cout<<"\n 2. Enter the Second Number (b): ";
    cin>>b;
}
int sum(Sum s1)
{
    return (s1.a+s1.b);
}
int main()
{
    Sum obj;

    obj.setdata();
    cout<<"\n --> Sum of a & b are: "<<sum(obj);

    return 0;
}