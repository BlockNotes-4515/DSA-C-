#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Default Constructors.

/*class test
{
    private:
    int a;
    int b;

    public:
    test();
    void display()
    {
        cout<<"\n---------------------Area Calculated!-------------------\n"<<endl;

        cout<<"\n--> The area of the square are: "<<(a*a)<<endl;
        cout<<"\n --> The area of the Rectangle are: "<<(a*b)<<endl;
    }  
};
test::test()
{
    cout<<"\n------------------Enter the Details here!------------------\n"<<endl;

    cout<<"\n 1. Enter the values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the values of b: ";
    cin>>b;
}
int main()
{
    test t;
    t.display();

    return 0;
}*/
//Parametrized Constructors.
/*class test
{
    private:
    int a;
    int b;

    public:
    test(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void display()
    {
        cout<<"\n-------------------------Area Calculated!----------------------\n"<<endl;

        cout<<"\n 1. Area of a Square are: "<<(a*a)<<endl;
        cout<<"\n 2. Area of an Rectangle are: "<<(a*b)<<endl;
    }
};
int main()
{
    test(1,2);
    test t;
    t.display();

    return 0;
}*/
//Default and Parametrized Constructors.
//Constructor Overloading.
/*
class test
{
    private:
    int length;
    int breath;

    public:
    test()
    {
        length=12;
        breadth=8;
    }
    test(int len,double br)
    {
        length=len;
        breadth=br;
    }
    test(double l)
    {
        length=l;
        breadth=10;
    }
    void display()
    {
        return(length*breadth);
    }
};
int main()
{
    test t1,t2(8,6.6),t3(12.5);
    t1.display();
    t2.display();
    t3.display();

    return 0;
}*/
//Sample usage of Constructors.
/*
class test
{
    private:
    int num;
    string name;
    string college;

    public:
    test()
    {
        cout<<"\n 1. Enter the name of student: ";
        cin>>name;
        cout<<"\n 2. Enter the college name: ";
        cin>>college;
        cout<<"\n 3. Enter the code-Id number here: ";
        cin>>num;
    }
    void display()
    {
        cout<<"\n-------------------------------Student-Details!----------------------------\n"<<endl;

        cout<<"\n--> Name: "<<name<<endl;
        cout<<"\n --> College: "<<college<<endl;
        cout<<"\n --> Code Id: "<<num<<endl;
    }
};
int main()
{
    test t;
    t.display();

    return 0;
}
*/
//Constructor Overloading.
/*class test
{
    private:
    int length;
    int breadth;

    public:
    test()   //Constructor with no-arguments.
    {
        length=10;
        breadh=12;
    }
    test(int len, int bre) //Constructor with two-arguments.
    {
        length=len;
        breadth=bre;
    }
    test(double l)  //Constructor with single-arguments.
    {
        length=l;
        breadth=10;
    }
    int display()
    {
        return(length*breadth);
    }
};
int main()
{
    test t,t1,t2;
    cout<<"\n--> Constructor with n-arguments are: "<<t.display()<<endl;
    cout<<"\n --> Constructor with two-argument are: "<<t1.display(5,6)<<endl;
    cout<<"\n --> Constructor with single-arguments are: "<<t2.display(10.5)<<endl;

    return 0;
}*/
//Class Name: Default_construct
/*class Default_construct
{
public:
	int a, b;
 
	// Default Constructor
	Default_construct()
	{
		a = 100;
		b = 200;
	}
};
 
int main()
{
	Default_construct con;  //Object created
	cout << " \n 1. Value of a: " << con.a;
        cout<< " \n 2. Value of b: " << con.b;
	return 0;
}*/
/*class test
{
    private:
    int a;
    int b,l;

    public:
    test();
    void display()
    {
        cout<<"\n--------------------Area Details!------------------\n"<<endl;

        cout<<"\n 1. Area of the Square are: "<<(a*a)<<endl;
        cout<<"\n 2. Area of the Rectangle are: "<<(l*b)<<endl;
    }
};
test::test()
{
    cout<<"\n----------------------Entry Details!--------------------\n"<<endl;

    cout<<"\n 1. Enter the side of a square: ";
    cin>>a;
    cout<<"\n 2. Enter the 'length' and 'breadth' of the rectangle: ";
    cin>>l>>b;
}
int main()
{
    test t;
    t.display();
    return 0;
}*/
/*class test
{
    private:
    int a,l;
    int b;

    public:
    test()
    {
        cout<<"\n-----------------Entry details!--------------------\n"<<endl;

        cout<<"\n 1. Enter the values of a: ";
        cin>>a;
        cout<<"\n 2. Enter the length and breadth of rectnagle are: ";
        cin>>l>>b;
    }
    void display()
    {
        cout<<"\n---------------------Results!-----------------------\n"<<endl;

        cout<<"\n (i). Area of the Rectangle are: "<<(a*a)<<endl;
        cout<<"\n (ii). Area of the Rectangle are: "<<(l*b)<<endl;
    }
};
int main()
{
    test t;
    t.display();

    return 0;
}*/
//Parametrized constructors.
// class name: Rectangle
/*class Rectangle {
  private:
    double length;
    double breadth;
 
  public:
    // parameterized constructor 
    Rectangle(double l, double b) {
      length = l;
      breadth = b;
    }
 
    double calculateArea() {
      return length * breadth;
    }
};
 
int main() {
 	 // create objects to call constructors
Rectangle obj1(10,6);
Rectangle obj2(13,8);
 
 
  cout << "\n 1. Area of Rectangle 1: " << obj1.calculateArea();
  cout << "\n 2. Area of Rectangle 2: " << obj2.calculateArea();
 
  return 0;
}*/
/*class test
{
    private:
    double length;
    double breadth;

    public:
    test(double len,double br)            //Parametrized Constructors.
    {
        length=len;
        breadth=br;
    }
    double display()
    {
        return(length*breadth);
    }
};
int main()
{
    test t1(12.5,10.5);
    cout<<"\n --> Area of the rectangle are: "<<t1.display()<<endl;

    return 0;
}*/
//Constructor Overloading-similar to a function overloading.
//Checks Argument list, data-member and data-types.
/*class test
{
    private:
    double length;
    double breadth;

    public:
    test()    //Constructor with no-argyuments(Default Constructors);
    {
        length=6;
        breadth=5;
    }
    test(double len,double br)   //Constructor with a two-arguments(Parametrized Constructors);
    {
        length=len;
        breadth=br;
    }
    test(int l)    //Constructors with single-arguments(Parametrized Arguments);
    {
        length=l;
        breadth=5.5;
    }
    double display()
    {
        return(length*breadth);
    }
};
int main()
{
    test t, t1(12.5,10.5), t2(7);
    cout<<"\n --> 1. Constructor with no-arguments: "<<t.display()<<endl;
    cout<<"\n --> 2. Constructor with two-arguments: "<<t1.display()<<endl;
    cout<<"\n --> 3. Constructor with no-arguments are: "<<t2.display()<<endl;

    return 0;
}*/
// class name: Rectangle
/*class Rectangle {
  private:
    double length;
    double breadth;
 
  public:
    // parameterized constructor 
    Rectangle(double l, double b) {
      length = l;
      breadth = b;
    }
 
  // copy constructor with a Rectangle object as parameter copies data of the obj parameter
    Rectangle(Rectangle &obj) {
      length = obj.length;
      breadth = obj.breadth;
    }
 
 
    double calculateArea() {
      return length * breadth;
    }
};
 
int main() {
 	 // create objects to call constructors
Rectangle obj1(10,6);
Rectangle obj2 = obj1;   //copy the content using object
 
//print areas of rectangles
  cout << "\n 1. Area of Rectangle 1: " << obj1.calculateArea();
  cout << "\n 2. Area of Rectangle 2: " << obj2.calculateArea();
 
  return 0;
}*/
/*class test
{
    private:
    double length;
    double breadth;

    public:
    test(double len, double bre)
    {
        length=len;
        breadth=bre;
    }
    test(test &obj)
    {
        length=obj.length;
        breadth=obj.breadth;
    }
    double display()
    {
        return(length*breadth);
    }
};
int main()
{
    test t(5.5,6.7);
    test t1(t);  //test t1=t;
    cout<<"\n --> Area of the Rectangle1: "<<t.display()<<endl;
    cout<<"\n --> Area of the Rectangle2: "<<t.display()<<endl;

    return 0;
}*/
/*Copy-Costructors: It is used to copy of one object data memeber function-data copy it it to the another
                    object of the class is call as 'Copy-Constructor' which is used for memory-utilizations!*/
class test
{
    private:
    double length;
    double breadth;

    public:
    test(double len, double bre)  //Parametrized Constructors.
    {
        length=len;
        breadth=bre;
    }
    test(test &t)      //Copy Constructors.
    {
        length=t.length;
        breadth=t.breadth;
    }
    double display()
    {
        return(length*breadth);
    }
};
int main()
{
    test t1(12.5,6.6);
    test t2(t1);
    cout<<"\n 1. Area of the Rectangle 1 are: "<<t1.display()<<endl;
    cout<<"\n 2. Area of the Rectangle 2 are: "<<t2.display()<<endl;

    return 0;
}