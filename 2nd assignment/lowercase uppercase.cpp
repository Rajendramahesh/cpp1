#include <iostream>
#include<cctype>
using namespace std;
int main()
{
char c;
cout<<endl<<"Enter an Alphabet: ";
cin>>c;
if(c==tolower(c)){
    cout<<c<<" is in Lowercase.";
}
else{
    cout<<c<<" is in Uppercase.";
}
 return 0;
}