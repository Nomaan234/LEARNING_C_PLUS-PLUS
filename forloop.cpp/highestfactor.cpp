#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a integer : ";
    cin>>n;
    int hf;

    for(int i=1 ; i<n ; i++)
    {
        if(n%i==0)
        hf=i;
    }

    cout<<hf;
}