#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Half Common Factors(HCF).

int solve (int x,int y)
{
    if(x==0)
    {
        return y;
    }
    else if(y==0)
    {
        return x;
    }
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    return x;
    }
}
int main( int arg, char* argv[] )
 {
   cout << "\n 1. HCF of two numbers 12 and 72 is: " << solve(12, 72) << endl;
   cout << "\n 2. HCF of two numbers 18 and 13 is: " << solve(18, 13) <<   endl;
   cout << "\n 3. HCF of two numbers 117 and 96 is: " << solve(117, 96) << endl;
   cout << "\n 4. HCF of two numbers 85 and 15 is: " << solve(85, 15) << endl;

   return 0;
 }