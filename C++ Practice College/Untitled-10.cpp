#include<iostream>
using namespace std;
int main()
{int num1, i, sum=0;
 int Percentage, Avg;
 int arr[50];

    cout<<"\n---------------------------Marksheet Calculating all Values!-------------------\n";

    cout<<"\n 1. Enter the Total number of Subjects Marks which you want to enter: ";
    cin>>num1;
    cout<<"\n 2. Given Total Subjects are: "<<num1<<endl;

    for(i=0;i<=num1;i++)
    {
        cout<<"\n Enter the Marks in subjects: ";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"\n 3. The value of the given average!";
    Avg=sum/num1;
    cout<<"\n\n 4. Average are: "<<Avg<<endl;

    cout<<"\n 5. Now, for calculating the Percentage!";
    int total=num1*100;
    Percentage=(sum*100)/total;
    cout<<"\n\n 6. The value of given percentage: "<<Percentage<<endl;

    return 0;
}