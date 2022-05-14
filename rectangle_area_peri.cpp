#include <iostream>
using namespace std;
int main() {
    int l,b,a,p;
    cout<<"Ente length of rectangle: ";
    cin>>l;
    cout<<"Enrter width of rectangle: ";
    cin>>b;
    p=l*b;
    a=2*(l+b);
    cout<<endl<<"Perimeter of rectangle: "<<p;
    cout<<endl<<"Area of rectangle: "<<a;
    return 0;
}