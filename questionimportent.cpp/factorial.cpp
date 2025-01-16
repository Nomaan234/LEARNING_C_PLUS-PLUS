#include <iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cout<<"enter any number :";
    cin>>n;

    while(n>0)
    {
    factorial *= n;
    n--;
    }
    cout<<factorial;
}
