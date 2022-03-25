

#include <iostream>

using namespace std;

int main()
{
    int num,r,sum=0,t;
    cout<<"\n\nDisplay the number in reverse order : \n";
    cout<<"===================================================\n";
    cout<<"input a number ";
    cin>>num;
    t = num;
    do
    {
        r = num%10;
        sum = sum*10+r;
        num = num/10;
        
    }while (num!=0);
    cout<<"the number in reverse order is : "<<sum<<endl;
    
}
