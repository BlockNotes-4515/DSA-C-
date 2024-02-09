#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>  //Libraries File is used to copy the String from one to other format title.
using namespace std;


class test
{
    private:
    char title[30];
    float price;

    public:
    void setdata();
    void outdata();
};
void test::setdata(char a[], float b)
{
   strcpy(title,a);
   price=b;
}
void test::outdata()
{
    cout<<"\n --> Title are: "<<title<<" and --> Price are: "<<price<<endl;
    cout<<endl;
}
int main()
{
    test t1;
    t1.setdata("D",100);
    t1.outdata();

    return 0;
}