#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter number of row & column : ";
    cin>>n;
    // cout<<"enter number of column : ";
    // cin>>m;

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(i==n/2+1 || j==n/2+1 )
            {
                cout<<"* ";
            }

            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}