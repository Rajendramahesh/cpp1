#include <iostream>
using namespace std;
int main() {
    int a,b;
    
    cout<<endl<<" A/B ";
    cout <<endl<< "Enter value A :";
    cin>>a;
    cout <<endl<< "Enter value B :";
    cin>>b;
    cout <<endl<< "Quotient :"<<(float(a)/float(b));
    cout <<endl<< "Remainder :"<<a%b;
    return 0;
}