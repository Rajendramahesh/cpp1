#include<iostream>
using namespace std;
int main()
{
    float c, f;
    cout<<"Enter the Temperature in Celsius: ";
    cin>>c;
    f = (c*1.8)+32;
    cout<<"\nEquivalent Temperature in Fahrenheit: "<<f;
    cout<<endl;
    return 0;
}