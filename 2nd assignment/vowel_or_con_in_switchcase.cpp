#include <iostream>
#include<cctype>
using namespace std;
int main()
{
 char c;
 cout<<endl<< "Enter an Alphabet : ";
 cin>>c;
 c=tolower(c);
 switch(c) {
      case 'a' :
      case 'e' :
      case 'i' :
      case 'o' :
      case 'u' :
         cout <<c<<" Is Vowel"<<endl; 
         break;
      default :
        cout <<c<<" Is Consonant"<<endl; 
   }
 
 return 0;
}