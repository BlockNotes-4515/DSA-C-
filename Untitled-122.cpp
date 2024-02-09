/*
1. The use of multiple constructors in the same class is known as Constructor Overloading.

2. The constructor must follow one or both of the two rules below.

3. All the constructors in the class should have a different number of parameters.

4. It is also allowed in a class to have constructors with the same number of parameters
   and different data types.
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Constructor Overloading- just as like similar to a "Function Overloading"!

/*class area
{
    private:
    string name;
    int age;

    public:
    area()  //Default Constructors.
    {
        name="Dhruv_Dhayal";
        age=19;
    }
    area(string n,int total) //Parametrized Constructors with (Two Parameters).
    {
        name=n;
        age=total;
    }
    string  display()
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
    class area obj1,obj2("Suraj_Singh",20);
    cout<<"\n --> First Person name: "<<obj1.display()<<" and it age is: "<<obj1.get_age()<<endl;
    cout<<"\n --> Second Person name: "<<obj2.display()<<" and its age is: "<<obj2.get_age()<<endl;
    return 0;
}*/
/*class area
{
    private:
    int a;
    double r;
    double length,breadth;
    double base,height;

    public:
    area()  //Default Arguments.
    {
        a=4;
        cout<<"\n --> Side of the Square is: "<<a<<endl;
    }
    area(double radius)  //Parametrized Arguments with single parameter.
    {
        r=radius;
    }
    area(float l,int br)  //Parametrized Arguments with double parameter.
    {
        length=l;
        breadth=br;
    }
    area(int hen)  //Parametrized Arguments with single parameter.
    {
        base=5.5;
        height=hen;
    }
    void display()
    {
        cout<<"\n-----------------------Fetching all Areas of the Shapes!\n"<<endl;

        cout<<"\n 1. Area of the Square: "<<(a*a)<<endl;
    }
    void show()
    {
        cout<<"\n 2. Area of the Circle are: "<<(3.14*r*r)<<endl;
    }
    void getdata()
    {
        cout<<"\n 3. Area of the Rectangle are: "<<(length*breadth)<<endl;
    }
    void letdata()
    {
        cout<<"\n 4. Area of the Triangle are: "<<(0.5*base*height)<<endl;
    }
};
int main()
{
    class area a,a1(2.5),a2(5.5,6),a3(8);
    a.display();
    a1.show();
    a2.getdata();
    a3.letdata();
    
    return 0;
}*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int age;

    public:
    area()  // Default Constructors.
    {
        name="Dhruv_Dhayal";
        age=19;
    }
    age(string non,int angl)  // Parametrized Constructors.
    {
        name=non;
        age=angl;
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
    class student s1, s2("Yugansh_Gupta",20);
    cout<<"\n || --> Name of First Person: "<<s1.get_name()<<" and its age: "<<s1.get_age()<<endl;
    cout<<"\n || --> Name of the Second Person: "<<s2.get_name()<<" and its age: "<<s2.get_age()<<endl;

    return 0;
}
