#include<iostream>
using namespace std;
int main()
{int i,n, arr[50],sum=0;
 float avg,perc;

    cout<<"Name: Dhruv Dhayal";
    cout<<"Enrollment No: 0633702022\n";
    
    cout<<"\n 1. Enter the Subjects in order to calculate marks: ";
    cin>>n;
    cout<<"\n Total subjects to calculate the marks are: \n"<<n;

    for(i=0;i<n;i++)
    {
       cout<<"\nEnter the Marks in the subjects: \n";
       cin>>arr[i];
       sum=sum+arr[i];
        
    }
    cout<<"\nTotal sum of the Subject marks: "<<sum;
    avg=sum/n;

    int total=n*100;
    perc=(sum*100)/total;

    cout<<"\n\nTotal Average are: \n"<<avg;
    cout<<"\n\nPercentage: \n"<<perc;
    return 0;
}