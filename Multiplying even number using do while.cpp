/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int a = 10, b = 20, product = 1;
  do
    {
      if (a % 2 == 0)
	{
	  product = product * a;

	}
      a++;
    }
  while (a <= b);
  cout << "The product is equal to " << product;

}
