#include<iostream>
#include<iomanip>
using namespace std;
/* Friend Classes- 1. If One class is used to acess the private/protected data members private data is acessible
                   by the help of friend functions is called "friend classes!".
                   
                   2. Friend Function allow the one class to acess the private data of data members of other classes.
                   
                   3. Ex: If a class 'A' is used to acess the private/protected data memeber private data is acessibel
                          only by with the help of friend function, so that class 'A' acess the private data of Class 'B'.
                    
                    4. So, one class is used to acess the values & private data from one class to another this is the 
                       totall concwept of friend classes!.*/
class B;
class A 
{
    private:
    int a;
    public:
    void put()
    {
        cout<<"\n --> Enter the Values of a: ";
        cin>>a;
    }
    friend void max(class A,class B);
};
class B 
{
    private:
    int b;
    public:
    void input()
    {
        cout<<"\n --> Enter the Values of b: ";
        cin>>b;
    }
    friend void max(class A,class B);
};
void max(A aa,B bb)
{
    if(aa.a>bb.b)
    {
        cout<<"\n --> Maximum values is: "<<aa.a<<endl;
    }
    else
    {
        cout<<"\n --> Maximum values is: "<<bb.b<<endl;
    }
}
int main()
{
    A aa;
    B bb;
    aa.put();
    bb.input();
    max(aa,bb);

    return 0;
}