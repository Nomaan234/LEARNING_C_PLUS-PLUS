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

    int mx=a[0];
    for(int i=0 ; i<n ; i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
        }
    }
    cout<<endl<<"maximum elelment is : "<<mx;


}

