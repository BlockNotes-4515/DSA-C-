//Destructors: 1. When an Object no longer needed it can be destroy a another class a special memeber function called 
              // 2. The destructors. Which is invoke when an object is destoyed.
              // 3. No, argyments needed , and no 'return' type required.
              // 4. Static and global Variables the 'destructor' is called(invoked) before the program terminate.

//Working of Destructors: Destructors firstly runs whole of the program after comilation whole code then it check which
  
                        // Class memeory is going to be deleted!.
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class test
{
    public:
    test();   //Default parameters.
    ~test();
};
test::test()
{
    cout<<"\n --> This is an Constructors!"<<endl;
}
test::~test()
{
    cout<<"\n --> This is an Destructors!"<<endl;
}
int main()
{
    test t;
    cout<<"\n --> Terminate the main programms!"<<endl;return 0;

}