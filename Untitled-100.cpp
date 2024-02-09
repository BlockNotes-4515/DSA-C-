#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//1. Creating a Constructors.
/*2. Constructor is a special member function with the same name as of the class,
     is uses to initialize the object of the class.It is automatically invoked.
     Whenever an object is created!*/
// 3. Constructors does not have any 'return' type!.
// 4. Constructors generally uses to create the classes.
// 5. Constructors always uses in 'public' unless in 'private' it will raises an error.

class sum
{
    public:
    int a;
    int b;

    public:
    sum(void);
    void display()
    {
        cout<<"\n --> Sum of a: "<<a<<" and b: "<<b<<" are: "<<a<<" + "<<b<<" = "<<(a+b)<<endl;
    }
};
sum::sum(void)  //Constructors of same name, which os obvious to having this name.(Default Constructors)-because argument contains 'void'!
{
    cout<<"\n 1. Enter the values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the values of b: ";
    cin>>b;
}//If, you did not initialize the values then it will gives garbage values.
int main()
{
    sum s1;
    s1.display();

    return 0;
}
//Properties of Constructors.

/* 1. It should be declared in the 'public' section of the class.
   2. They are automatically invoked(call) whenever the object is created.
   3. Do, not have a 'return' type or as well as 'void' generally.
   4. It can have 'default' arguments.
   5. We, cannot refer to thier address.
   6. "Constructors" are special type of member-functions with the same name of a class.
       It is used to initialize the object of the class. It is automatically invoked
       Whenever the object in a class is created!
*/
