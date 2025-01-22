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

    int x1,x2,y1,y2;
    cout<<"enter the 1st cordinate";
    cin>>x1>>y1;

    cout<<"enter the 2nd cordinate";
    cin>>x2>>y2;


    int sum=0;
    for (int i=x1 ; i<=x2; i++)
    {
        for (int j = y1; j <= y2; j++)
        {
          sum += a[i][j];
        }
        
    }
    cout<<"sum of element is : "<<sum;

}