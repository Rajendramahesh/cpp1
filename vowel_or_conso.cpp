#include <iostream>
using namespace std;
int main() {
    char lr ,ur,c;
    cout<<endl<<"Enter an alphabet: ";
    cin>>c;
     lr = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
     ur = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
     if (lr || ur){
         cout<<endl<<c<<" is an vowel";
     }
    else{
        cout<<endl<<c<<" is a consonant";
    }

    return 0;
}