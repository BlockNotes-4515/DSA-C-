// q17.
#include<iostream>
using namespace std;

class Performance
{
    public:
    void Get_Performance(int score){
        if(score>80)
            cout<<"A\n";
        else if(score>70)
            cout<<"B\n";
        else if(score>60)
            cout<<"C\n";
        else if(score>50)
            cout<<"D\n";
        else if(score>40)
            cout<<"E\n";
        else
            cout<<"F\n";
    }
};

class Test : public virtual Performance
{
    int score[5];
    int avg = 0;
    int n;
    public:
    int Score()
    {
        cout<<"\n --> How, many subject marks you want to enter: ";
        cin>>n;
        cout<<"\n 1. Enter your Test score for "<<n<<" subjects: "<<endl;
        for(int i = 0; i < n; i++)
        {
            cout<<"\n Enter the subject "<<i+1<<" --> ";
            cin>>score[i];
            avg += score[i];
        }
        return (avg/n);
    }
};

class Sport : public virtual Performance
{
    int score[4];
    float avg = 0;
    public:
    int Score()
    {
        cout<<"\n ------------------- Sport's Performance! --------------------"<<endl;

        cout<<"\n Entering the '4' Sports marks: "<<endl;
        for(int i = 0; i < 4; i++)
        {
            cout<<"\n Enter the Sport "<<i+1<<" is:  ";
            cin>>score[i];
            avg += score[i];
        }
        return avg/3;
    }
};

class Student : public Test, public Sport
{
    public:
    Sport sport;
    Test test;
    int Test_score()
    {
        return test.Score();    
    }
    int Sport_score()
    {
        return sport.Score();    
    }
};

int main()   
{
    cout<<"\n 1. Name: Dhruv Dhayal"<<endl;
    cout<<"\n 2. Enrollment No: 06313702022"<<endl;
    cout<<"\n----------------- Student's Report! -------------------"<<endl;
    Student s1;
    int score;
    score = s1.Test_score();
    cout<<"\n --> Your Test Result:   ";
    s1.Get_Performance(score);
    
    score = s1.Sport_score();
    cout<<"\n -->Your Sports Result:   ";
    s1.Get_Performance(score);
    return 0;
}