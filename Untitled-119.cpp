#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/* Constructors in C++  !!
 
    1. 'Constructors' is one of the special type of Member function with the same name of that
        particular class. It is generally used to initialize the Object within the class.
    2. 'Constructors' does not have any type of 'return' types or values generally.
    3. 'Constructors' by default uses in 'public' acess mdifiers, in private it will gives an error.
    4. 'Constructors' are automatically call/invoked whenever the new object is created!
    5. 'Constructors' are generally used to construct new two or more classes.
    */
//Constructors uses inside the class.

/*class student
{
    private:
    string name,roll_no;
    string section, phn;
    float marks;

    public:
    student()  // <-- This is the Constructors!;
    {
        cout<<"\n--------------------Application Details!---------------------\n"<<endl;

        cout<<"\n 1. Enter the name of the Student: ";
        cin>>name;
        cout<<"\n 2. Enter the roll_no: ";
        cin>>roll_no;
        cout<<"\n 3. Enter your section with contact no: ";
        cin>>section>>phn;
        cout<<"\n 4. Now, "<<name<<" plz, enter your marks here: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"\n-----------------------Fetching Data of Student!"<<endl;

        cout<<"\n || --> Name of Student: "<<name<<endl;
        cout<<"\n || --> Roll_No: "<<roll_no<<" || --> Section: "<<section<<endl;
        cout<<"\n || --> Marks: "<<marks<<" || --> Conatcat Info: "<<phn<<endl;
    }
};
int main()
{
    class student obj1;

    obj1.display();
    return 0;
}*/

// Now, Using the Constructor outside the class.

class student
{
    private:
    string name,section;
    string address, phn;
    float marks;

    public:
    student();
    void display();
};
student::student()
{
    cout<<"\n----------------------------Application forms!---------------------------\n"<<endl;

    cout<<"\n 1. Enter the name of the Studnet: ";
    cin>>name;
    cout<<"\n 2. Enter the Section of the class: ";
    cin>>section;
    cout<<"\n 3. Enter the contact details: ";
    cin>>phn;
    cout<<"\n 4. Enter your address & marks: ";
    cin>>address>>marks;
}
void student::display()
{
    cout<<"\n----------------------------Fetching all Data!"<<endl;

    cout<<"\n || --> Name of the Student: "<<name<<endl;
    cout<<"\n || --> Section of the Class: "<<section<<endl;
    cout<<"\n || --> Contact details of "<<name<<" is: "<<phn<<endl;
    cout<<"\n || --> Adress: "<<address<<" || BCA overall Marks: "<<marks<<endl;
}
int main()
{
    class student obj1;

    obj1.display();
    return 0;
}
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