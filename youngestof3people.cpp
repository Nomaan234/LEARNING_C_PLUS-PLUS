#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the age of a : "<<endl;
    cin>>a;

    cout<<"enter the age of b : "<<endl;
    cin>>b;

    cout<<"enter the age of c : "<<endl;
    cin>>c;

    if( a<b)
    {
        if(a<c)
        {
            cout<<"a is youngest";

        }
        else
        {
            cout<<"c is youngest";
        }
    }

    if(b<a)
     {
        if(b<c)
        {
            cout<<"b is youngest";

        }
        else
        {
            cout<<"c is youngest";
        }
    }


}   