/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int temp;
    cout<<"Enter temperature in centigrade ";
    cin>>temp;
    if(temp <=10){
        cout<<"\nVery Cold Weather";
    }
    else if(temp <=20){
        cout<<"\nCold Weather";
    }
    else if(temp <=40){
        cout<<"\nIts Hot Weather";
    }
        else if(temp >=41){
        cout<<"\nIts very  Hot Weather";
    
    }
    
    return 0;
}
