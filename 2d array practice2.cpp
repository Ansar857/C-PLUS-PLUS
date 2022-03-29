#include <iostream>

using namespace std;

int
main ()
{
  int a[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8} };
  int sum = 0, row = 2;
  int no_of_columns = 2;
  for (int col; col < no_of_columns; col++)
    {
      sum = sum + a[row][col];

    }
  cout << sum;
}
