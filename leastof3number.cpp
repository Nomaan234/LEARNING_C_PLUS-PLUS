#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter integer a : "<<endl;
    cin>>a;

    cout<<"enter integer b : "<<endl;
    cin>>b;

    cout<<"enter integer c : "<<endl;
    cin>>c;

    if( a<b && a<c)
    {
        cout<<"a is the smallest integer" ;
    }
     
    else if(a>b && c>b) 
    {
        cout<<"b is the smallest integer" ;
    }

    else
    {
        cout<<"c is the smallest integer" ;
    }

}   