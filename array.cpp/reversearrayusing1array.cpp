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

     int i=0;
     int j=n-1;


    // using for loop


    // for(int i=0 ; i<j ; i++)
    // {
    //     int temp=a[j];
    //     a[j]= a[i];
    //     a[i]=temp;

    //     j--;
    // }


    // using while loop

    while(i!=j)
    {
        int temp=a[j];
        a[j]= a[i];
        a[i]=temp;

         j--;
         i++;
    }

     cout<<" reverse array : ";

    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }


 

}
