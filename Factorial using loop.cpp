

#include <iostream>

using namespace std;

int
main ()
{
  int num,a=1,i;
  cout<<"Enter a number = ";
  cin>>num;
  for (int i = 1; i <= num ; i++)
    {
        a=i*a;
        
    }
    cout<<"\nFactorial of given number is = "<<a;
    
}