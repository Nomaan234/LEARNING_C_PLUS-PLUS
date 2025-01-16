#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a integer : ";
    cin>>n;
    int hf;

    for(int i=n/2 ; i>1 ; i++)
    {
        if(n%i==0)
        hf=i;
        break;
    }

    cout<<hf;
}