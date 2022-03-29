#include <iostream>

using namespace std;

int
main ()
{
  int a[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8} };
  int largest;
  int no_of_columns = 2, no_of_rows = 5;
  for (int row = 0; row < no_of_rows; row++)
    {
      largest = a[row][0];
      for (int col; col < no_of_columns; col++)
	{
	  if (largest < a[row][col])
	    {
	      largest = a[row][col];
	    }
	}
      cout << "\nThe largest element in row " << row +
	1 << " is " << largest << " . ";
    }
  for (int col = 0; col < no_of_columns; col++)
    {
      largest = a[0][col];
      for (int row = 1; row < no_of_rows; row++)
	{
	  if (largest < a[row][col])
	    {
	      largest = a[row][col];
	    }

	}
      cout << "\nThe largest element in column " << col +
	1 << " is " << largest << " . ";
    }
}
