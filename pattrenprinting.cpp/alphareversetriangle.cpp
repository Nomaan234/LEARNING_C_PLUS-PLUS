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
        for(int j=1 ; j<=n-i+1 ; j++)
        {
            cout<< (char)(j+64) ;
        }
        cout<<endl;
    }

}