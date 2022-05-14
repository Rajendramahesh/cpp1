#include <iostream>
#include<cctype>
using namespace std;
int main()
{
int i;
cout<<endl<<"Even number frm 0 to 10 using FOR LOOP:";
for(i=0;i<=10;i++)
{
    if(i%2==0){
        cout<<i<<" " ;
    }
}
cout<<endl<<"Even number frm 0 to 10 using WHILE LOOP:";
i=0;
while(i<=10){
    if(i%2==0){
        cout<<i<<" " ;
    }
    i++;
}
cout<<endl<<"Even number frm 0 to 10 using DO WHILE LOOP:";
i=0;
do{
    if(i%2==0){
        cout<<i<<" " ;
    }
    i++;
} while(i<=10);
 return 0;
}