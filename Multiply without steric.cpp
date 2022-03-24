#include <iostream>

using namespace std;

int
main ()
{
  int x, y;
  cout << "Enter numb1 = ";
  cin >> x;
  cout << "Enter numb1 = ";
  cin >> y;

  int p = 0;

  while (y > 0)
    {
      p = p + x;
      y = y - 1;
    }
  cout << p;
}
