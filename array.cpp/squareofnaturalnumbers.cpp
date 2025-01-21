#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    int a[n];


    for(int i=0 ; i<n ; i++)
    {
        a[i]=i+1;
    }

    
    cout<<"array : ";

    for(int i=0 ; i<n ; i++)
    {
        cout<< pow(a[i] ,2) <<" ";
    }

    


}