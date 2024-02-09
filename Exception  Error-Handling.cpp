// program to divide two numbers
// throws an exception when the divisor is 0

#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

/*cout<<"\n------------------- Exceptional Handling! ----------------------------"<<endl;
try {
    // code
}
catch (...) {
    // code
}

//----------------- Functions of all values are! 

try- Just before the execution of the program it simply checks the code-segment of the program
     to check exceptions and errors, if any error meet then it will not execute that code and 
     handle that particular exception and passes to 'throw'!

throw- As a name describe itself it simply handle the exceptions just before execution of the
       particular program and passes it to the catch function and its values passes as a arg.
       in a catch values.
       
catch- Just as name its main functionality is used to catch exceptions and errors which is pass
       by the through functions with a recieved arguments!
*/


int main() {

    double numerator, denominator, divide;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {

        // throw an exception if denominator is 0
        if (denominator == 0)
            throw 0;

        // not executed if denominator is 0
        divide = numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;
    } 

    catch (int num_exception) {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }
    return 0;
}