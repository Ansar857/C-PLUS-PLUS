#include <iostream>

using namespace std;

int
main ()
{
  int a, b;
  cout << "Enter value of A : ";
  cin >> a;
  cout << "Enter value of B : ";
  cin >> b;

  int *ptrA = &a;
  int *ptrB = &b;

  cout << "Value of ptrA is : " << *ptrA << " stored in address  " << ptrA <<
    "\n";
  cout << "value of ptrB is " << *ptrB << " stored in address " << ptrB <<
    "\n";
}
