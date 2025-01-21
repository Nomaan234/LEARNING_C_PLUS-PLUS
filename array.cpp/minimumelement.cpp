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

    int min=a[0];
    for(int i=0 ; i<n ; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<endl<<"minimum elelment is : "<<min;


}