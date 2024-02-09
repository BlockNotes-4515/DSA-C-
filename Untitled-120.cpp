/* Type of Constructors also Exists!"

    1. Default Construtors().
    2. Parametrized Constructors().
    3. Copy Constructors().
*/
/*
Let us understand the types of constructors in C++ by taking a real-world example. 
Suppose you went to a shop to buy a marker. When you want to buy a marker, what are the options. 
The first one you go to a shop and say give me a marker. So just saying give me a marker mean that,
 you did not set which brand name and which color, you didn’t mention anything just say you want a marker. 
 So when we said just I want a marker so whatever the frequently sold marker is there in the market or in 
 his shop he will simply hand over that. And this is what a default constructor is! 
 
 The second method is you go to a shop and say I want a marker a red in color and XYZ brand. 
 So you are mentioning this and he will give you that marker. So in this case you have given the parameters. 
 And this is what a parameterized constructor is! Then the third one you go to a shop and say. 
 I want a marker like this(a physical marker on your hand). So the shopkeeper will see that marker.
Okay, and he will give a new marker for you. 
So copy of that marker. And that’s what a copy constructor is!*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/* 1. Default Constructors- mostly commonly used constructors, it is also know as zero argument
                            Constructors, does not recieve anytype of arguments with no-parameters.
                            */
                
/*class area
{
    private:
    int a;
    double r;
    float l,b;
    int br,h;

    public:
    area()
    {
        cout<<"\n-------------------------Default Constructors!-------------------------\n"<<endl;

        cout<<"\n 1. Enter the side of the Square: ";
        cin>>a;
        cout<<"\n 2. Enter the Radius of the Circle: ";
        cin>>r;
        cout<<"\n 3. Enter the Length & Breadth of the Rectangle: ";
        cin>>l>>b;
        cout<<"\n 4. Enter the Base & Height of the Triangle are: ";
        cin>>br>>h;
    }
    void display()
    {
        cout<<"\n-------------------------Areas of the Different shapes!"<<endl;

        cout<<"\n || --> Area of the Square are: "<<(a*a)<<endl;
        cout<<"\n || --> Area of the Circle are: "<<(3.14*r*r)<<endl;
        cout<<"\n || --> Area of the Rectangle are: "<<(l*b)<<endl;
        cout<<"\n || --> Area of the Triangle are: "<<(0.5*br*h)<<endl;
    }
};
int main()
{
    class area a1;

    a1.display();
    return 0;
}*/
// Another Examples of Parametrized Constructors.

class area
{
    private:
    int a;
    double r;
    float l,b;
    int bre,h;

    public:
    area();
    void display();
};
area::area()
{
    cout<<"\n--------------------------Area Information Shapes!------------------------\n"<<endl;

    cout<<"\n 1. Enter the side of the Square are: ";
    cin>>a;
    cout<<"\n 2. Enter the Radius of the Circle are: ";
    cin>>r;
    cout<<"\n 3. Enter the 'Length' & 'Breadth' of the Rectangle are: ";
    cin>>l>>b;
    cout<<"\n 4. Enter the 'Breadth' and 'Height' of the Triangle are: ";
    cin>>bre>>h;
}
void area::display()
{
    cout<<"\n--------------------------Fetching All Area!\n"<<endl;

    cout<<"\n || --> Area of the Square: "<<(a*a)<<endl;
    cout<<"\n || --> Area of the Circle: "<<(3.14*r*r)<<endl;
    cout<<"\n || --> Area of the Rectangle are: "<<(l*b)<<endl;
    cout<<"\n || --> Area of the Triangle are: "<<(0.5*bre*h)<<endl;
}
int main()
{
    class area obj1;

    obj1.display();
    return 0;
}

