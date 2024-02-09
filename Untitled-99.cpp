#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class sorting
{
    private:
    int num;
    int arr1[100];

    public:
    void setdata();
    void getdata();
};
void sorting::setdata()
{
    cout<<"\n------------------------Insertion-Sorting!-----------------------\n"<<endl;

    cout<<"\n 1. Enter, how many numbers you want to enter in an array: ";
    cin>>num;
    cout<<"\n 2. Enter the "<<num<<" in array are: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr1[i];
    }
}
void sorting::getdata()
{
    int key,j,i;
    
    for(i=1;i<num;i++)
    {
        key=arr1[i];
        j=i-1;
    }
    while(j>0 && arr1[j]>key)
    {
        arr1[j+1]=arr1[j];
        j=j-1;
    }
    arr1[j+1]=key;

    cout<<"\n --> Insertion sorting of an array are given here!"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"\t"<<setw(2)<<arr1[i]<<endl;
    }
}
int main()
{
    sorting s1;
    s1.setdata();
    s1.getdata();

    return 0;
}
