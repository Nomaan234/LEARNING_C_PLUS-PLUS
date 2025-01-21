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


    cout<<endl<<"reverse array : ";

    for(int i=n-1 ; i>=0 ; i--)
    {
        cout<<a[i]<<" ";
    }
}