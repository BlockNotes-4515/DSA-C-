#include<iostream>
using namespace std;
int main()
{int a,b;
 float r=3.14;
 char c;
 bool is_true=true;
 bool is_false=false;

    cout<<"\n------------------Using Variables and Data-Types---------------\n";
    cout<<"\n 1. Enter the value of a: ";
    cin>>a;

    cout<<"\n 2. Enter the value of b: ";
    cin>>b;

    cout<<"\n The value of a: "<<a<<" And the value of b: "<<b<<endl;

    cout<<"\n The value of the r(radius) of the circle: "<<r<<endl;

    cout<<"\n Enter the value of the characters: ";
    cin>>c;
    cout<<"\n Given character entered by the user are: "<<c<<endl;

    cout<<"\n The value of Global and Local Variable is same or not?";
    cout<<"\n\t Ans. Yes! it is possible.";

    cout<<"\n The value of the bollean in terms of True/False!\n";
    cout<<"\n The values of is_true: "<<is_true<<endl;
    cout<<"\n The values of is_false: "<<is_false<<endl;

    return 0;
}