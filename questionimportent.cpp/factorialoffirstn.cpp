#include <iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"enter any number :";
    cin>>n;
    for (int i=1; i<=n ; i++)
    {
        fact=1;
        int j = i;
        while(j>0)
    {
    fact *= j;
    j--;

    }
    cout<<"factorial of "<<i<<" : "<<fact<<endl;
    }
}  
