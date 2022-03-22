#include <iostream>

using namespace std;

int
main ()
{
  int num1;
  cout << "Enter table you want to print = ";
  cin >> num1;


  cout << "\n\t\t\tSTRAIGHT ORDER";

  for (int num = 1; num <= 10; num++)
    {
      cout << "\n" << num1 << " X " << num << "  = " << num * num1 << "";
    }


  cout << "\n\t\t\tREVESE ORDER\n";


  for (int num = 10; num > 0; num--)
    {
      cout << "\n" << num1 << " X " << num << "  = " << num * num1;
    }
}
