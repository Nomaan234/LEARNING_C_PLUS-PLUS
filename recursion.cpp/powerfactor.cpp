#include <iostream>
using namespace std;

int  pow(int a, int b)
{
    if( b==0)
    {
        return 1;
    }

    if (b%2==0)
    {
        return  pow(a,b/2) * pow(a,b/2);
    }

    if (b%2!=0)
    {
        return  a * pow(a,b-1);
    }

    
}
int main()
{
    int a;
    cout<<"enter the base value ";
    cin>>a;

    int b;
    cout<<"enter the power ";
    cin>>b;

    cout<<pow(a,b);
}