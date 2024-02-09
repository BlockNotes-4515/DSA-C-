#include<iostream>
#include<iomanip>
using namespace std;
int a,b,c;


int sum(int a, int b, int c)
{
    cout<<"\n-----------------------Additions!---------------------------\n"<<endl;

    cout<<"\n Sum of the Three Variables are given below!"<<endl;
    int sum=0;
    sum=(a+b+c);
    cout<<"\n Total Sum is: "<<sum<<endl;
    cout<<"\n Sum of "<<a<<" + "<<b<<" + "<<c<<" = "<<sum<<endl;
    return 0;
}
int sub(int a, int b, int c)
{
    cout<<"\n-----------------------Substractions!---------------------------\n"<<endl;

    cout<<"\n 1. Substraction of the Three Number by using the rule of BODMAS!"<<endl;
    int sub;
    sub=(a-b)-c;
    cout<<"\n 2. Substraction of the three values are: "<<sub<<endl;
    cout<<"\n 3. Substraction of: ("<<a<<" - "<<b<<") -"<<c<<" = "<<sub;
    return 0;
}
int mult(int a, int b, int c)
{
    cout<<"\n-----------------------Multiplications!---------------------------\n"<<endl;

    cout<<"\n 1. Multiplication of the three numbers by using the BODMAS Rule!"<<endl;
    int mult;
    mult=(a*b)*c;
    cout<<"\n 2. The Mutiplication values are: "<<mult<<endl;
    cout<<"\n 3. Multiplication of ("<<a<<" * "<<b<<") *"<<c<<" = "<<mult<<endl;
    return 0;
}
int div(int a, int b, int c)
{
    cout<<"\n-----------------------Divisions!---------------------------------\n"<<endl;
   
    cout<<"\n 1.Division of the three Numbers By using the Rule of BODMAS!"<<endl;
    int div;
    div=(a/b)/c;
    cout<<"\n 2. Division of the three variables are: "<<div<<endl;
    cout<<"\n 3. Division of: ("<<a<<" / "<<b<<" ) / "<<c<<" = "<<div<<endl;
    return 0;
}
//Actual arguments value by calling insinde the values of the Functions.
int main()
{
    int a,b,c;
    cout<<"\n 1. Enter the Values of a: ";
    cin>>a;
    cout<<"\n 2. Enter the values of b: ";
    cin>>b;
    cout<<"\n 3. Enter the Values of c: ";
    cin>>c;

    cout<<sum(a,b,c);
    cout<<sub(a,b,c);
    cout<<mult(a,b,c);
    cout<<div(a,b,c);

    return 0;
}
//Using by the value of "Call By Values Techniques!";

