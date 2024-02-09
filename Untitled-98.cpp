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
    cout<<"\n---------------------Bubble Sorting!------------------------\n"<<endl;

    cout<<"\n 1. How, many numbers you want to enter: ";
    cin>>num;
    cout<<"\n 2. Now, Enter the Number "<<num<<" Which you enter: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr1[i];
    }
}
void sorting::getdata()
{
    cout<<"\n 3. Sorting of an array in Ascending order given here!"<<endl;
    for(int i=0;i<num-1;i++)
    {
        for(int j=0;j<num-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    cout<<"\n --> Sorting an array in ASCENDING ORDER: "<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"\t"<<setw(2)<<arr1[i]<<endl;
    }
    cout<<"\n 4. Sorting of an array in Descending order given here!"<<endl;
    for(int i=0;i<num-1;i++)
    {
        for(int j=0;j<num-i-1;j++)
        {
            if(arr1[j]<arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    cout<<"\n --> Sorting an array in DESCENDING ORDER: "<<endl;
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