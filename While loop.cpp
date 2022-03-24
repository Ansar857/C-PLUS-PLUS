#include <iostream>

using namespace std;

int
main ()
{
  int a, sum = 0;
  cout << "Enter a number = ";
  cin >> a;
  int i = 0;
  while (i < a)
    {

      cout << i << "\n";
      i += 1;
      sum += i;
    }
  cout << "the sum of all natural number is = " << sum;
}
