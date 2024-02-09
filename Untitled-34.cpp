#include<iostream>
#include<string.h>
using namespace std;

class test
{
    protected:
    int id_test;
};
//Declaring the Member Function inside the Class!
class child:public test
{
    public:
    void set_id(int id)
    {
        id_test=id;
    }
    void display()
    {   
        int id;
        cout<<"\n 1--> Your Given form ID are: "<<id<<id_test<<endl;
    }
};
int main()
{
    child obj1;
    obj1.set_id(4515);
    obj1.display();

    return 0;
}