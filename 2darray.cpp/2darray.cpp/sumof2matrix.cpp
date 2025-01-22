#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of rows : ";
    cin>>n;

    cout<<"enter the number of columns : ";
    cin>>m;


// 1st array

    int a[n][m];
    cout<<"enter the element of array a : ";
    for (int i = 0; i < n; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"array a : "<<endl;
    for (int i=0 ; i<n; i++)
    {
        for (int j = 0; j < m;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
// 2nd array

    int b[n][m];
    cout<<"enter the element of array b : ";
    for (int i = 0; i < n; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>b[i][j];
        }
        
    }
    cout<<"array b : "<<endl;
    for (int i=0 ; i<n; i++)
    {
        for (int j = 0; j < m;j++)
        {
           cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // sum of both matrix in 3rd matrix

    int c[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            c[i][j] = a[i][j] + b[i][j]; 
        }
        
    }
    cout<<"sum of both array : "<<endl;
    for (int i=0 ; i<n; i++)
    {
        for (int j = 0; j < m;j++)
        {
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    

}