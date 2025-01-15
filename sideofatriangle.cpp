#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter side a : "<<endl;
    cin>>a;

    cout<<"enter side b : "<<endl;
    cin>>b;

    cout<<"enter side c : "<<endl;
    cin>>c;

    if( (a+b>c) && (b+c>a) && (c+a>b))
    {
        cout<<"valid sides of a triangle ";
    }

    else
    {
        cout<<"not valid sides of a triangle ";
    }
}