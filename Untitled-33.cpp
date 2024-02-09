#include<iostream>
#include<iomanip>
using namespace std;

//Declaring of Memeber Function within the classes.
class test
{
    protected:
    int id_test;
};
class child:public test
{
    public:
    void set_id(int id)
    {
        id_test=id;
    }
    void display()
    {   int id;
        cout<<"\n 1.--> Your Id: "<<id<<id_test;
    }
};
int main()
{
    child obj1;
    obj1.set_id(20);
    obj1.display();

    return 0;
}