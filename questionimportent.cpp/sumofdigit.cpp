#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter any number :";
    cin>>n;

    while(n>0)
    {
        int ld=n%10;
    n=n/10;
    sum += ld;
    }
    cout<<sum;
}