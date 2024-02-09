#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*class complex
{
    private:
    int a,b;
    int c,d;

    public:
    void setdata()
    {
       cout<<"\n 1. Enter the First Number: ";
       cin>>a;
       cout<<"\n 2. Enter the Second Number: ";
       cin>>b;
       cout<<"\n------------------------------"<<endl;
       cout<<"\n 1. Enter the Another First Number: ";
       cin>>c;
       cout<<"\n 2. Enter the Another Second Number: ";
       cin>>d;
    }
    void getdata()
    {
        cout<<"\n----------------------Complex Numbers!--------------------\n";

        cout<<"\n --> Complex Numbers are: "<<a<<" + "<<b<<" i "<<endl;
        cout<<"\n --> Second Forms are: "<<c<<" + "<<d<<" i "<<endl;
        int temp=(a+c);
        int flag=(b+d);
        cout<<"\n --> Addition of Complex Numbers are: "<<temp<<" + "<<flag<<" i "<<endl;
    }
};
int main()
{
    complex c1;
    c1.setdata();
    c1.getdata();

    return 0;
}*/
/*class summing
{
    private:
    int a,b;

    public:
    void setdata();
    friend int sum(summing);
};
void summing::setdata()
{
    cout<<"\n 1. Enter the First Number: ";
    cin>>a;
    cout<<"\n 2. Enter the Second Number: ";
    cin>>b;
}
int sum(summing s)
{
    return (s.a+s.b);
}
int main()
{
    summing g1;
    g1.setdata();
    cout<<"\n --> Sum of two variables are: "<<sum(g1);

    return 0;
}*/
/*Friend Keyword-is used to declare that outside member function have right/ permmission 
  to acess the private/protected data of the data members.*/

//1. Friend is not the part of the Class, it's just give the verification to compiler in order to give as a proof.
//2. Usually Contains Object as a Functional Arguments.
//3. You can also use the friend keyword bothe public/private/protected based on user's choice.
//4. It, cannot acess the members by their names directly and need obj_name to acess.

/*class summing
{
    private:
    int a;
    int b;

    public:
    void setdata();
    friend int sum(summing);
};
void summing::setdata()
{
    cout<<"\n 1. Enter the First Number: ";
    cin>>a;
    cout<<"\n 2. Enter the Second Number: ";
    cin>>b;
}
int sum(summing s)
{
    return(s.a+s.b);
}
int main()
{
    summing obj1;
    obj1.setdata();
    cout<<"\n --> Sum of the Two Numbers are: "<<sum(obj1);

    return 0;
}*/
/*class area
{
    private:
    float r;

    public:
    void setdata();
    friend float calculate(area);  //Syntax: friend data_type function-name(arguments);
};
void area::setdata()
{
    cout<<"\n 1. Enter the Radius of a Circle: ";
    cin>>r;
}
float calculate(area a1)
{
    return(3.14*a1.r*a1.r);
}
int main()
{
    area obj;
    obj.setdata();
    cout<<"\n --> Area of the Circle is: "<<calculate(obj)<<" cm"<<endl;

    return 0;
}*/
/*class area
{
    private:
    float r;
    int b,h,l;
    float a;

    public:
    void setdata();
    friend float circle(area);
    friend int triangle(area);
    friend float square(area);
    friend int rectangle(area);
};
void area::setdata()
{
    cout<<"\n 1. Enter the Radius of a Circle: ";
    cin>>r;
    cout<<"\n 2. Enter the Base/Height of a Triangle: ";
    cin>>b>>h;
    cout<<"\n 3. Enter the Side of a Square: ";
    cin>>a;
    cout<<"\n 4. Enter the Length/ Breadth of a Rctangle: ";
    cin>>l>>b;
}
float circle(area a1)
{
    return (3.14*a1.r*a1.r);
}
int triangle(area a2)
{
    return(0.5*a2.b*a2.h);
}
float square(area a3)
{
    return (a3.a*a3.a);
}
int rectangle(area a4)
{
    return (a4.l*a4.b);
}
int main()
{
    area obj;
    obj.setdata();
    cout<<"\n-----------------------------Area of Different Shapes!-----------------------\n"<<endl;

    cout<<"\n --> Area of a circle: "<<circle(obj)<<endl;
    cout<<"\n --> Area of the Triangle: "<<triangle(obj)<<endl;
    cout<<"\n --> Area of a Square: "<<square(obj)<<endl;
    cout<<"\n --> Area of a Rectangle: "<<rectangle(obj)<<endl;

    return 0;
}*/
/*class fact
{
    private:
    int num;
    int fact=1;

    public:
    void setdata();
    friend int factorial(fact);
};
void fact::factorial()
{
    cout<<"\n 1. Enter the Number here to find its Factorial: ";
    cin>>num;
}
int factorial(fact f1)
{
    for(int i=0;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"\n --> Factorial: "<<fact<<endl;
}
int main()
{
    fact obj;
    obj.setdata();
    cout<<"\n --> Factorial of given number are: "<<fact(obj)<<endl;

    return 0;
}*/
/*class shareit
{
    private:
    string password;
    string gf,name;
    string choice;

    public:
    void setdata();
    friend string network(shareit);
};
void shareit::setdata()
{
    cout<<"\n 1. Hey, Friend Tell me your name: ";
    cin>>name;
    cout<<"\n 2. Go, and Propose your gf and go for a date, tell me her name I forget: ";
    cin>>gf;
    cout<<"\n 3. Hey, Bro tell me your phone-password i forget my phone, its urgent: ";
    cin>>password;
}
string network(shareit s1)
{
    cout<<"\n --> You are only friend-or-best-friend choose-->(B/BBF): ";
    cin>>choice;
    if(choice==s1.'B' || choice==s1.'b')
    {
        cout<<"\n --> Yes, I tell you about him, his name is: "<<s1.name<<" and his gf: "<<s1.gf<<endl;
        cout<<"\n --> You can take it his phone and call , password is: "<<s1.password<<endl;
    }
    else if(choice==s1.'BBF' || choice==s1.'bbf')
    {
        cout<<"\n --> Sorry! friend im, loyal in this case. I did not want to disclose him!"<<endl;
    }
    else
    {
        cout<<"\n --> Give me some time, i think abou it!"<<endl;
    }
}
int main()
{
    shareit obj;
    obj.setdata();
    cout<<"\n -->Given Details are here!\n"<<network(obj)<<endl;

    return 0;
}*/
class shareit
{
    private:
    string password;
    string gf,name;
    string choice;

    public:
    void setdata();
    friend string network(shareit);
};
void shareit::setdata()
{
    cout<<"\n 1. Hey, Friend Tell me your name: ";
    cin>>name;
    cout<<"\n 2. Go,and Propose your gf in 4th sem,tell me her name I forget: ";
    cin>>gf;
    cout<<"\n 3. Hey,Bro tell me your phone-password i forget my phone, its urgent: ";
    cin>>password;
}
string network(shareit s1)
{
       cout<<"\n---------------------------Shareit-Leaked Details!-----------------------------\n"<<endl;

       cout<<"\n --> Yes, I tell you about him, his name is "<<s1.name<<" and his gf "<<s1.gf<<endl;
       cout<<"\n --> You can take it his phone and call, password is: "<<s1.password<<endl;
}
int main()
{
    shareit obj;
    obj.setdata();
    cout<<"\n -->Given Details are here!\n"<<network(obj)<<endl;

    return 0;
}

