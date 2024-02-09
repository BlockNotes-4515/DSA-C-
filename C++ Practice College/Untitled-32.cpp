#include<iostream>
#include<iomanip>
using namespace std;

class circle
{
    public:
      double radius;  //Data-Member.
      double compute_area()   //Memeber-Functions.
      {
        return 3.14*radius*radius;
      }
};

int main()
{
    circle test;
    int radius;
    test.radius=3.5;
    cout<<"\n Radius are: "<<radius<<endl;
    cout<<"\n Computational Area are: "<<test.compute_area();

    return 0;
}