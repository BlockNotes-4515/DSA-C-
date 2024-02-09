//Copy Constructors.

/*A Copy constructor is an overloaded constructor used to declare and initialize an object from another object.*/

/*Default Copy constructor: The compiler defines the default copy constructor. 
  If the user defines no copy constructor, compiler supplies its constructor.
  User Defined constructor: The programmer defines the user-defined constructor.
*/
//Syntax: Class_name(const class_name &old_object);  

/*#include <iostream>  
using namespace std;  
class A  
{  
   public:  
    int x;  
    A(int a)                // parameterized constructor.  
    {  
      x=a;  
    }  
    A(A &i)               // copy constructor  
    {  
        x = i.x;  
    }  
};  
int main()  
{  
  A a1(20);               // Calling the parameterized constructor.  
 A a2=a1;  //A a2(a1);              //  Calling the copy constructor.  
 cout<<a2.x;  
  return 0;  
}  */
class area
{
    public:
    int a;

    public:
    area(int x)
    {
       a=x;
    }
    area(area &i)
    {
        a=i.a;
    }
};
int main()
{
    class area a1(10);
    class area a2(a1);
    cout<<a2.a;
    return 0;
}