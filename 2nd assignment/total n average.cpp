#include <iostream>
#include<cctype>
using namespace std;
int main()
{
int i,sum,av;
sum=0;
cout<<endl<<"Total and Average using FOR LOOP:";
for(i=1;i<=10;i++)
{
    sum=sum+i;
}
cout<<endl<<"Total: "<<sum;
cout<<endl<<"Avarage: "<<sum/10;

cout<<endl<<"Total and Average using While LOOP:";
sum=0;
i=1;
while(i<=10){
     sum=sum+i;
     i++;
}
cout<<endl<<"Total: "<<sum;
cout<<endl<<"Avarage: "<<sum/10;

cout<<endl<<"Total and Average using DO While LOOP:";
i=1;
sum=0;
do{
   sum=sum+i;
   i++;
} while(i<=10);
cout<<endl<<"Total: "<<sum;
cout<<endl<<"Avarage: "<<sum/10;
 return 0;
}