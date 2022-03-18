#include <iostream>
using  namespace std;

int main()
{
    float x,y;
    cout<<"Enter value1 = ";
    cin>>x;
    cout<<"Enter value2 = ";
    cin>>y;
    if(x>y){
        cout<<"\n"<<x;
        cout<<" is greater then  " <<y;
        cout<<"\n"<<y;
        cout<<" is less then  " <<x;
    }
    
    if(x<y){
        cout<<x;
        cout<<" is less then  " <<y;
        cout<<"\n"<<y;
        cout<<" is greater then  " <<x;
    }
    
}