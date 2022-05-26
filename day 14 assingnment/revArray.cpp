#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int c[5],i,j,r[5],n;
    
   
    for(i=0,j=4;i<5;i++,j--){
         cout<<endl<<">>:";
         cin>>c[i];
         r[j]=c[i];
    }
    cout<<"original"<<"     "<<"reversed";
    for(i=0;i<5;i++){
         
      cout<<endl<<c[i]<<"               "<<r[i];
      
      
    }
    return 0;
}
