#include <iostream>

using namespace std;

int
main ()
  int a[5][3] = { {0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9} };
  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 2; j++)
	{
	  cout << "a [" << i << "][" << j << "]:";
	  cout << a[i][j] << endl;
	}
    }
}
