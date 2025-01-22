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
     int palindrome=true;

    
    while(i<j)
    {
       if(a[i]!=a[j])
       {
        palindrome=false;
        break;
       }
        i++;
        j--;
    }

    if(palindrome)
    {
        cout<<endl<<"array is palimdrome";
    }


    else
    {
        cout<<endl<<"array is not palimdrome";
    }


 

}
