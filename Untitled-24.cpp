#include<iostream>
#include<iomanip>
using namespace std;

/*Inline Functions- The Inline Functions is used to perform only simple & Precise task because it stores the memeory in Cache Memory,
  or it cannot able to perform the complex or large programmes because it takes lot of storage space, if you use lagrge programmes in
   inline functions it will automatically converted into normal Functions!
  */
/*cout<<"\n----------------------------------------First Inline Sum Functions!-------------------------\n";

inline int sum(int a, int b)
{
    return (a+b);
}

int main()
{
    int a,b;
    cout<<"\n 1. Enter the values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the values of b: ";
    cin>>b;
    cout<<"\n 3. The values of a: "<<a<<" and b: "<<b<<" are given here: "<<a<<" + "<<b<<" = "<<sum(a,b);

    return 0;
}*/

/*cout<<"\n----------------------------------------First Inline Sum/ Sub/ Prod/ Div Functions!-------------------------\n";

inline int sum(int a, int b)
{
    return (a*b);
}
inline int sub(int a, int b)
{
    return (a-b);
}
inline int mul(int a, int b)
{
    return (a*b);
}
inline int div(int a, int b)
{
    return (a/b);
}

int main()
{
    int a,b;
    cout<<"\n 1. Enter the values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the values of b: ";
    cin>>b;
    cout<<"\n 3. The Sum values of a: "<<a<<" and b: "<<b<<" are "<<a<<" + "<<b<<" = "<<sum(a,b)<<endl;
    cout<<"\n 4. The Substraction values of a: "<<a<<" and b: "<<b<<" are "<<a<<" - "<<b<<" = "<<sub(a,b)<<endl;
    cout<<"\n 5. The Multiplication values of a: "<<a<<" and b: "<<b<<" are "<<a<<" * "<<b<<" = "<<mul(a,b)<<endl;
    cout<<"\n 6. The Duvision values of a: "<<a<<" and b: "<<b<<" are "<<a<<" + "<<b<<" / "<<div(a,b)<<endl;

    return 0;
}*/
/*
inline int product(int a,int b)
{
    
    return (a*b);
}
int main()
{
    int a,b;
    cout<<"\n 1. Enter the values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the values of b: ";
    cin>>b;
    cout<<"\n 3. The value of product are: "<<product(a,b);

    return 0;
}
*//* static c=0;  //This executes only once.
    c=c+1;*/

/*inline int sum(int a, int b)
{
    return (a+b);
}
inline int mul(int a, int b)
{
    return (a*b);
}
int main()
{
    int a=9, b=9;
    cout<<"\n 1. Total sum are: "<<sum(a,b)<<endl;
    cout<<"\n 2. Total Multiplication are: "<<mul(a,b)<<endl;

    return 0;
}*/

inline int principle(int p, int r, int t=10)
{
    return (p*r*t)/100;
}
int main()
{
    int p, r, t;
    cout<<"\n 1. Enter the Principle: ";
    cin>>p;
    cout<<"\n 2. Enter the Rate : ";
    cin>>r;
    cout<<"\n Given intrest are: "<<principle(p,r,t);

    return 0;
}
//Default Arguments-When User did not pass the value to the parameter , then automatically it accepts the default arguments.
//Default arguments -It should be declare from Right-to-left.
