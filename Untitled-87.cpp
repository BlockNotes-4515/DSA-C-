#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class area
{
   private:
   int r;
   int l,b;
   int sq;
   int h,base;

   public:
   void getdata();
   friend float circle(area);
   friend float square(area);
   friend int rectangle(area);
   friend int triangle(area);
};
void area::getdata()
{
    cout<<"\n 1. Enter the Radius of a Circle r: ";
    cin>>r;
    cout<<"\n 2. Enter the Side of a Square: ";
    cin>>sq;
    cout<<"\n 3. Enter the length & Breadth of Rectangle: ";
    cin>>l>>b;
    cout<<"\n 4. Enter the height & Base of a Triangle: ";
    cin>>h>>base;

}
float circle(area a1)
{
    return(3.14*a1.r*a1.r);
}
float square(area a2)
{
    return(a2.sq*a2.sq);
}
int rectangle(area l1)
{
    return(l1.l*l1.b);
}
int triangle(area tri)
{
    return(0.5*tri.base*tri.h);
}
int main()
{
    area a;
    a.getdata();
    cout<<"\n-----------------------Area Details!-----------------------\n"<<endl;

    cout<<"\n 5. Total Area of the Circle are: "<<circle(a)<<endl;
    cout<<"\n 6. Total Area of the Square are: "<<square(a)<<endl;
    cout<<"\n 7. Total Area of the Rectangle are: "<<rectangle(a)<<endl;
    cout<<"\n 8. Total Area of the Triangle are: "<<triangle(a)<<endl;
    cout<<endl;

    return 0;
}