#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //Pointers-The pointers is used to store the Address of the data and pointing the value to its address.
    int a=90;
    int *b=&a;
    cout<<"\n The Value of a is: "<<*b<<endl;
    cout<<"\n The Address of a is: "<<b<<endl;
    cout<<"\n The Address of a is: "<<&a<<endl;

    //&-(Containing the Addreess) values in the data.
    //*- Which is responsible to hold the data present in that particular address.

    cout<<"\n--------------------------------Simple Pointers!------------------------------\n";
    int x=89;
    int *y, **z, ***d;
    y=&x;
    z=&y;
    d=&z;
    cout<<"\n 1. The Value of x is: "<<x<<endl;
    cout<<"\n 2. The Address of x is: "<<y<<endl;
    cout<<"\n 3. The Address of x is: "<<&x<<endl;

    cout<<"\n 4. The Value of y is: "<<y<<endl;
    cout<<"\n 5. The Address of y is: "<<&y<<endl;
    cout<<"\n 6. The Address of y is: "<<z<<endl;

    cout<<"\n 7. The Value of z is: "<<z<<endl;
    cout<<"\n 8. The Address of z is: "<<&z<<endl;
    cout<<"\n 9. The Address of z is: "<<d<<endl;
    
    cout<<"\n 10. The Value of d is: "<<d<<endl;
    cout<<"\n 11. The Address of d is: "<<&d<<endl;
    cout<<"\n 12. The Value of d is: "<<*d<<endl;

    cout<<"\n------------------------------------Pointers-to-pointers!---------------------------\n";
    int e=90;
    int *f, **g, ***h;
    f=&e;
    g=&f;
    h=&g;
    cout<<"\n 1. The value of e are: "<<e<<endl;
    cout<<"\n 2. The Address of e are: "<<&e<<endl;
    cout<<"\n 3. The Adress of e are: "<<f<<endl;

    cout<<"\n 4. The value of f are: "<<*f<<endl;
    cout<<"\n 5. The Address of f are: "<<&f<<endl;
    cout<<"\n 6. The Adress of f are: "<<g<<endl;

    cout<<"\n 7. The value of g are: "<<**g<<endl;
    cout<<"\n 8. The Address of g are: "<<&g<<endl;
    cout<<"\n 9. The Adress of g are: "<<h<<endl;
    
    cout<<"\n 10. The value of h are: "<<***h<<endl;
    cout<<"\n 11. The Address of h are: "<<&h<<endl;

    return 0;
}