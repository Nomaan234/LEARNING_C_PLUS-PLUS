#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of rows : ";
    cin>>n;

    cout<<"enter the number of columns : ";
    cin>>m;


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

    int prod=1;
    for (int i=0 ; i<n; i++)
    {
        for (int j = 0; j < m;j++)
        {
          prod *= a[i][j];
        }
        
    }
    cout<<"sum of element is : "<<prod;

}