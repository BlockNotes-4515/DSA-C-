#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class sorting
{
    private:
    int num;
    int arr1[50];

    public:
    void setdata();
    void getdata();
};
void sorting::setdata()
{
    cout<<"\n------------------------------Bubble-Sorting!---------------------------\n"<<endl;
    
    cout<<"\n 1. Enter How, many numbers you want to enter and sort: ";
    cin>>num;
    cout<<"\n 2. Enter the Numbers "<<num<<" enter here: ";
    for(int i=0;i<=num;i++)
    {
        cin>>arr1[i];
    }
}
void sorting::getdata()
{
    cout<<"\n 3. Now, Sorting of an Element in an Ascending Order!";
    for(int i=0;i<=num-1;i++)
    {
        for(int j=0;j<=num-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    cout<<"\n\n --> Here are the Sorting of an array: ";
    for(int i=0;i<=num;i++)
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