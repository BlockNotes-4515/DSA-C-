#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int i=1;

    /*Using the Loops in C++-There are three types of loop in C++;

       1. While Loop;
       2. D0-While Loop;
       3. For Loop;
       4. Sentinal Constrol loop;
       
       Loops-are used to perform an indivisual st regular interval period of times!*/

       cout<<"\n----------------------Using the For-loop in C++!---------------------\n";
       
       for(i=1;i<=6;i++)
       {
          cout<<i;
          if(i==5)
          break;
       }
       int i2=1;
       cout<<"\n-----------------------Using the While-Loop in C++!--------------------\n";
       while(i2<=40)
       {
          cout<<i2<<endl;
          i2++;
       }
       cout<<"\n------------------------Using the Do-While Loop! in C++!----------------\n";
       int i3=1;
       do{

         cout<<"\n It can exist atleast Once1 if condition is found to be false!";
         cout<<i<<endl;
         i++;
       }while(i<=10);
       cout<<"\n------------------------Quiz Time In C++!----------------------\n";
       cout<<"\n Challenge Accepted!\n"<<endl;
       cout<<"\n Printing the Table of 21 to 25 sepreatly!"<<endl;
       
       return 0;
}