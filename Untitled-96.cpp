#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
/*'this' Pointer-1. It,is used to point those values which is not understood by a compiler at the 
                 time of execution of source-code, problem mainly occur at the time of similar
                 values used by a user/programmer.

                 2. It simply not a keyword/or a word it's just a name to refer as a Pointer.
                 
                 3. It remove the Complexiness of code and make unstandable for a Compiler,
                    at the time of Execution.*/
class demo
{
    private:
    int a;
    int b;

    public:
    void getdata()
    {
        cout<<"\n 1. Enter the values of a: ";
        cin>>a;
        cout<<"\n 2. Enter the values of b: ";
        cin>>b;
    }
    void show()
    {
        cout<<"\n --> Values of a are: "<<this->a<<endl;
        cout<<"\n --> Values of b are: "<<(*this)<<endl;
        cout<<this;
    }
};
int main()
{
    demo obj1;
    obj1.getdata();
    obj1.show();
    cout<<&obj1;

    return 0;
}