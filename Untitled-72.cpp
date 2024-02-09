#include <iostream>  
using namespace std;  
  
class Complex 
{  
public:  
    int real; // To store real part of complex number  
    int imaginary; // To store imaginary part of complex number  
  
    Complex()  
    {  
    // Initial values are zero   
        real = 0;  
        imaginary = 0;  
    }  
    Complex(int r, int i)  
    {  
        real = r; // r is initialized during object creation  
        imaginary = i; // i is initialized during object creation  
    }  
  
    Complex addComplexNumber(Complex C1, Complex C2)  
    {  
  
        Complex res; // result object of complex class  
  
        // adding real part of complex numbers  
        res.real = C1.real + C2.real;  
  
        // adding Imaginary part of complex numbers  
        res.imaginary = C1.imaginary + C2.imaginary;  
  
        // returning the sum  
        return res;  
    }  
};  
  
// Main Class  
int main()  
{  
  
    // First Complex number  
    Complex C1(4, 5);  
  
    // printing first complex number  
    cout << "\n 1.Complex number 1 : " << C1.real << " + i" << C1.imaginary << endl;  
  
    Complex C2(8, 9);  
  
    // printing second complex number  
    cout << "\n2. Complex number 2 : " << C2.real<< " + i" << C2.imaginary << endl;  
  
    Complex C3;   
    C3 = C3.addComplexNumber(C1, C2);  

    cout << "\n ----> Sum of complex number : "  << C3.real << " + i" << C3.imaginary;  
  
    cout<<endl<< endl;    
    Complex A(2, 7);  
  
   
    cout << "\n 1. Complex number 1 : " << A.real<< " + i" << A.imaginary << endl;  
  
   
    Complex B(10, 6);  
    cout << "\n 2. Complex number 2 : " << B.real<< " + i" << B.imaginary << endl;  
  
    Complex C;   
    C = C.addComplexNumber(A, B);  
  
    // printing the sum  
    cout << "\n ----> Sum of complex number : " << C.real << " + i"<< C.imaginary;  
}  