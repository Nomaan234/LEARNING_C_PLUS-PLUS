#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    int a[n];

    cout<<"enter the element : ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    
    cout<<"array : ";

    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }

    int b[n];

     for(int i=0 ; i<n ; i++)
    {
        
        b[i]=a[n-1-i];
    }

     cout<<endl<<"reverse array : ";

    for(int i=0 ; i<n ; i++)
    {
        cout<<b[i]<<" ";
    }

 

}
