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
  int low, high;
  bool flag = true;
  cout << "enter two no's (interval)";
  cin >> low >> high;
  cout << "Prime numbers between" << low << " and " << high << " is ";
  do
    {
      for (int i = 2; i < low; i++)
	{
	  if (low % i == 0)
	    {
	      flag = false;
	      break;
	    }
	}
      if (flag)
	{
	  cout << low << " ";
	}
      low++;
      flag = true;
    }
  while (low < high);
}
