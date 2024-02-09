#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int num1;
 int age;

    cout<<"\n-------------------Showing the Use of if-else values!----------------------\n";

    cout<<"\n 1. Enter the value of the Number to check that is Even/Odd: ";
    cin>>num1;
    cout<<"\n 2. The Number choosen by the user are: "<<num1<<endl;

    if(num1%2==0)
    {
        cout<<"\n 3. Number is found to be even : "<<num1<<endl;
    }
    else
    {
        cout<<"\n 3. Number is Found to be Odd: "<<num1<<endl;
    }

    cout<<"\n--------------------Showing if,else-if,else values! Ladder!--------------------------\n";
    cout<<"\n 4. Enter your age currently: ";
    cin>>age;
    cout<<"\n 5. Conditional age given by the user are: "<<age<<endl;

    cout<<"\n Age accepted are lies in between (18-25) or greater not much 70!"<<endl;
    if(age==18)
    {
        cout<<"\n 6. You are allowed , but aware must be older in age next time: "<<age<<endl;
    }
    else if((age>=18) && (age<=25))
    {
        cout<<"\n 6. You can come teenager will be happilly accepted by age: "<<age<<endl;
    }
    else if((age>25) && (age<=70))
    {
        cout<<"\n 6. You are too much old dada ji , It's Ok you can come: "<<age<<endl;
    }
    else
    {
        cout<<"\n 6. Sorry! You are just as child/ Older, you are not accepted: "<<age<<endl;
    }

    cout<<"\n-----------------------Switch-Case Construct Statements!------------------------------\n";
    int age2;
    int p,r,t;
    char cha;

    cout<<"\n 1. Enter the Your age to check rate of Intrest: ";
    cin>>age2;
    cout<<"\n 2. Your Current Age are: "<<age2<<endl;
    switch(age2)
    {
        case(age2==18):
        {
            cout<<"\n You first need open your Demat-Account! Firstly!"<<setw(2)<<"because of your age: "<<age2<<endl;
        }
        break;
        case(age2>18 && age2<25):
        {
            cout<<"\n@@@@@@ Enter Your Princilple values: ";
            cout<<"\n@@@@@@ Enter Your Rate of Intrest currently: ";
            cout<<"\n@@@@@@ Enter Your Time required: ";
            cout<<"\n Your Loan at Principle: "<<p<<setw(2)<<"Rate: "<<r<<setw(2)<<"Time required: "<<t<<endl;
            loan=(p*r*t)/100;
            cout<<"\n Your Total valued Intrest on loan INR Margin are: "<<loan<<endl;
        }
        break;
        case(age2>=25 && age2<=70):
        {
            cout<<"\n You should be prefer to take loan because your age is: "<<age2<<endl;
            cout<<"\n Which Insurance you would like: ";
            cout<<"\n\t A. Health Insurance!"<<endl;
            cout<<"\n\t B. Life Insurance!"<<endl;
            cout<<"\n\t C. Jeevan Sathi!"<<endl;
            cout<<"\n\t D. Jeevan Siromni!"<<endl;
            cout<<"\n Enter the characters here: ";
            cin>>cha;
            cout<<"\n Your Policy are: "<<cha<<setw(2)<<"Congratulations!"<<endl;
        }
        break;
        case(age2>70 && age2<=100):
        {
            cout<<"\n You are too much old dadaji/dadi ji :) "<<endl;
            cout<<"\n Relax!"<<endl;
            cout<<"\n Your Pension is coming in few Months by Indian Goverment!"<<endl;
        }
        break;
        case(age2>100):
        {
            cout<<"\n You are Ramdev or what? Not Possible , By drink milk and then go to sleep on your bed!";
        }
        break;
        default:
        {
            cout<<"\n You can see the Synatx-formmating in C++ code same as in C ok!";
        }
    }
    return 0;

}