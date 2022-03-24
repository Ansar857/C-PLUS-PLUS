

#include <iostream>
#include <cmath>

using namespace std;

int
main ()
{
  int num, a , i;
  cout << "Enter a number = ";
  cin >> num;
  for (int i = 1; i <= num; i++)
    {
      int a = i;
      cout<<"\nCube of "<<a<<" is "<< pow(a,3);
    }

}
