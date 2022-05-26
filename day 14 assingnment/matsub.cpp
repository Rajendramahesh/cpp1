#include<iostream>
using namespace std;
 
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3];
 
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter " <<i<< j <<" value of mat1:";
            cin>>mat1[i][j] ;
            cout<<"Enter "<<i<<j <<" value of mat2:";
           cin>>mat2[i][j];		
        }
    }
 
    /* Adding matrices Mat1 and Mat2 */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = mat2[i][j] - mat1[i][j];	
        }
    }
 
    cout << "First Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat1[i][j] << "\t";	
        }
        cout << endl;
    }
 
    cout << "Second Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat2[i][j] << "\t";	
        }
        cout << endl;
    }
 
    cout << "Third Matrix = Second Matrix - First Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat3[i][j] << "\t";	
        }
        cout << endl;
    }
}