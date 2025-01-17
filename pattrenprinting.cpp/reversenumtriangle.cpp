#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter number of row : ";
    cin>>n;
    // cout<<"enter number of column : ";
    // cin>>m;

    for(int i=1 ; i<=n ; i++)
    {
        int a=n;
        for(int j=1 ; j<=i ; j++)
        {
            cout<<a;
            a=a-1 ;
        }
        cout<<endl;
    }

}