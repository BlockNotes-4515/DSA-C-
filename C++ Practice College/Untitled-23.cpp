#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "\n 1. Enter two numbers: ";
  cin >> a >> b;

  // Swap the values of a and b without using a third variable.
  a = a + b;
  b = a - b;
  a = a - b;

  cout << "\n 2. After swapping, a = " << a << " and b = " << b << endl;
  return 0;
}