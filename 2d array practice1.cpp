#include <iostream>

using namespace std;

int
main ()
{
  string a[2][2] = { {"orange", "peach"}, {"apple", "mango"} };
  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 2; j++)
	{
	  cout << "a [" << i << "][" << j << "]:";
	  cout << a[i][j] << endl;
	}
    }
}
