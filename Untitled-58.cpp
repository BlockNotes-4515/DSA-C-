#include <iostream>
#include <string>
using namespace std;

// A program to check binary number and interchange 0's and 1's 

class binarychange
{
   string s;

   public:
       void read(void);
       void chk_bin(void);
       void change(void);
       void display(void);
};

void binarychange :: read(void){
    cout<<"\n 1. Enter a binary number: ";
    cin>>s;
}

void binarychange :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"\n ----> Invalid binary format"<<endl;
            exit(0);
        }
    }
        
}

void binarychange :: change(void){
    for (int i = 0; i < s.length(); i++)
    {
       if (s.at(i)=='0')
       {
           s.at(i)='1';
       }
       else{
           s.at(i)='0';
       }
    }
    
}

void binarychange :: display(void){
    cout<<"\n 2. Displaying your binary number!"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
   binarychange b;
   b.read();
   b.chk_bin();
   b.display();
   b.change();
   b.display();



    return 0;
}