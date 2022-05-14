#include <iostream>
using namespace std;
int main()
{
 int m;
 cout <<endl<< "Enter marks : ";
 cin>>m;
 cout <<endl<< "Your grade:";
 if(m<25){
     cout <<endl<< "F";
 }
 else if(m>=25 && m<=45){
     cout <<endl<< "E";
 }
else if(m>45 && m<=50){
     cout <<endl<< "D";
}
else if(m>50 && m<=60){
     cout <<endl<< "C";
}
else if(m>60 && m<=80){
     cout <<endl<< "B";
}
else{
     cout <<endl<< "A";
}
 
 return 0;
}