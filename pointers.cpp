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
  int x[3] = { 10, 20, 30 };
  int *p;
  p = &x[0];
  for (int i = 0; i < 3; i++)
    {
      cout << p << "\t" << *p << endl;
      p++;
    }
}
