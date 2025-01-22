#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of rows : ";
    cin>>n;

    cout<<"enter the number of columns : ";
    cin>>m;

    int a[n][m];
    cout<<"enter the roll no. : ";
    for (int i = 0; i < 1; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>a[i][j];
        }
        
    }

    cout<<"enter the marks : ";
    for (int i = 1; i < n; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>a[i][j];
        }
        
    }


    for (int j = 0; j < n;j++)
    {
        for (int i=0 ; i<m; i++)
        {
           cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }


    cout<<"tranpose of the array : "<<endl;
    for (int j = 0; j < m;j++)
    {
        for (int i=0 ; i<n; i++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}