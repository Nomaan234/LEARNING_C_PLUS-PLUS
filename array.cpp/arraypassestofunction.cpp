#include<iostream>
using namespace std;

void change( int a[] ,int n )
{
    a[0]=90;
    // cout<<" change array : ";

    // for(int i=0 ; i<n ; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

}

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

    

    change( a ,n);

    cout<<" change array : ";
     for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<sizeof(a);
}