#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float a,b,c,d;
    cout<<"Enter number1 = ";
    cin>>a;
    cout<<"Enter number2 = ";
    cin>>b;
    cout<<"Enter number3 = ";
    cin>>c;
    cout<<"Enter number4 = ";
    cin>>d;
    float result1 = max(a,d);
    cout<<"Maximum number in number1 and number4 is = "<< result1;
    float result2 = min(b,c);
    cout<<"\nMinimum number in number2 and number3 is = " << result2;
    float result3 = pow(b,2);
    cout<<"\nSquare of point 2  is = " << result3;
    float result4 = sqrt(c);
    cout<<"\nSquare root of point 3  is = " << result4;
    cout<<"\nSum = "<<result3+result4;
    

}
