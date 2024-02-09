#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Copy Constructors-When we, need to initialize the variable of an object with the value of variable a another object
                // of same type then we uses the concept 'copy' constructors.

/*syntax:class test
         {
            private:
            int a;

            public:
            test(int sm)
            {

            }
            test()
            {
                a=10;
            }
         };
         int main()
         {
            test tt;
            test t(tt);
            //we also uses int z=t; passes value 10.

            return 0;
         }
*/
class A
{
    private:
    int a;

    public:
    A()
    {
        a=10;
    }
    A(A &z)
    {
        a=z.a;
    }
    void put()
    {
        cout<<a<<endl;
    }
};
int main()
{
    A aa;
    A bb(aa);
    A cc=bb;
    aa.put();
    bb.put();
    cc.put();

    return 0;
}
