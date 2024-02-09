#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
    public:
    class student
    {
        private:
        int num;

        public:
        void setdata(int n)
        {
            num=n;
        }
        void outdata()
        {
            cout<<"\n ----> The Number Choosen by the User are: "<<num<<endl;
            cout<<endl;
        }
    };
};
int main()
{
    cout<<"\n --> !! This is an Example od the Nested Class!! ";
    person::student obj;
    obj.setdata(20);
    obj.outdata();

    return 0;
}