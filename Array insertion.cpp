#include <iostream>

using namespace std;

int
main ()
{
  string fruits[6] = { "Apple", "Orange", "Mango", "Melon", "Grapes" };
  fruits[5] = "Peach";
  cout << fruits[3];

}
