/*
--> Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed.
 Meaning, a destructor is the last function that is going to be called before an object is destroyed.

--> A destructor is also a special member function like a constructor. 

#######Destructor destroys the class objects created by the constructor. #########

--> Destructor has the same name as their class name preceded by a tilde (~) symbol.
--> It is not possible to define more than one destructor. 
--> The destructor is only one way to destroy the object created by the constructor. 
--> Hence destructor can-not be overloaded.
--> Destructor neither requires any argument nor returns any value.
--> It is automatically called when an object goes out of scope. 
--> Destructor release memory space occupied by the objects created by the constructor.
--> In destructor, objects are destroyed in the reverse of an object creation.
--> The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory
    that resides in the heap memory or the free store, the destructor should use delete to free the memory.  
*/
/*class area
{
    private:
    string name;
    int age;

    public:
    area()
    {
        name="Dhruv_Dhayal";
        age=19;
    }
    area(string num,int hen)
    {
        name=num;
        age=hen;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
};
int main()
{
    class area a1,a2("Yugansh_Gupta",20);
    cout<<"\n || --> First Person Name: "<<s1.get_name()<<" and its age: "<<s1.get_age()<<endl;
    cout<<"\n || --> Second Person Name: "<<s2.get_name()<<" and its age: "<<s2.get_age()<<endl;

     return 0;
}*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class area
{
    private:
    string name;
    int age;

    public:
    area()   // Default Constructors.
    {
        name="Dhruv_Dhayal";
        age=19;
    }
    area(string num,int hen)  // Parametrized Constructors.
    {
        name=num;
        age=hen;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }  
    ~area()  // Constructor is Destroyed Now!
    {
        cout<<"\n Constructor Destroyed Now!"<<endl;
    }
};
int main()
{
    class area s1,s2("Yugansh_Gupta",20);
    cout<<"\n || --> First Person Name: "<<s1.get_name()<<" and its age: "<<s1.get_age()<<endl;
    cout<<"\n || --> Second Person Name: "<<s2.get_name()<<" and its age: "<<s2.get_age()<<endl;

    return 0;
}