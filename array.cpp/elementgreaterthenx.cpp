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

    int x;
    cout<<" interger : ";
    cin>>x;

    int count=0;
     for(int i=0 ; i<n ; i++)
    {
        if(a[i]>x)
        {
            count++ ;
        }
    }

    cout<<"element greater than x : "<<count;
    


}