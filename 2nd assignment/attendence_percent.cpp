#include <iostream>
using namespace std;
int main()
{
 int td,nd;
 float pr;
 cout<<endl<< "EnterNumber of classes held : ";
 cin>>td;
 cout<<endl<< "EnterNumber of classes attended : ";
 cin>>nd;
 pr=(float(nd)/float(td))*100;
 if(pr<75){
     
 cout<<endl<<"Attendence percent: "<<pr<<endl<<"Attendence percent is less than 75% Not allowed to classes";
 }
else{
     cout<<endl<<"Attendence percent: "<<pr<<endl<<"Allowed to Class";
}
 
 return 0;
}