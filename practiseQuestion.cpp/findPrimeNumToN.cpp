#include<iostream>
using namespace std;

bool prime(int i)

{
    if(i<=1)
    {
        return false ;
    }

    for( int j=2 ; j<i ; j++)
    {
        if(i%j==0)
        return false ;
    }

    return true ;
}
int main()
{
    int n;
    cout<<"enter an integer : ";
    cin>>n;

    for(int i=2  ; i<=n ; i++)
    {
         if(prime(i))
         {
            cout<< i <<" ";
         }
    }
}
