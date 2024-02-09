#include <iostream>
using namespace std;

// Main function.
int main()
{
   int mat[3][3];

   cout << "Insert the values of the matrix: ";
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> mat[i][j];
      }
   }

   // Making a line break.
   cout << endl;

   // Printing the 2D array for visualization.
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << mat[i][j] << "  ";
      }
      cout << endl;
   }

   return 0;
}
