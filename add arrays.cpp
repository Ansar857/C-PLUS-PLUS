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
  double numbers[] = { 7, 5, 6, 12, 35, 27 };

  double sum = 0;
  double count = 0;
  double average;
  cout << "The numbers are : ";

for (const double &n:numbers)
    {
      cout << n << " ";
      sum += n;

      ++count;
    }
  cout << "\nTheir sum = " << sum << endl;

  average = sum / count;
  cout << "\nTheir average = " << average << endl;
}
