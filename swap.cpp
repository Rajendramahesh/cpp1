#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enrter Y: ";
    cin>>y;
    cout<<endl<<"Before swaping"<<endl<<"x= "<<x<<" y= "<<y;
   x=x+y;
   y=x-y;
   x=x-y;
     cout<<endl<<"After swaping"<<endl<<"x= "<<x<<" y= "<<y;
    
    return 0;
}