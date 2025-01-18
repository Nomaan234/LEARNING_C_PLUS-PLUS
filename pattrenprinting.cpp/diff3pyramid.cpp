#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter hieght of pyramid : ";
    cin>>n;
    // cout<<"enter number of column : ";
    // cin>>m;

     int a=1;

    for(int i=1 ; i<=n ; i++) 
    {
        for(int j=1 ; j<=n-i; j++)
        {
            cout<<"  ";
        }
         
        

        for(int j=1 ; j<=a ; j++)   //if not want to use another vairiable use AP condition.....(2*i-1)
        {
            cout<<"* " ;
            
        }
        a += 2;
        cout<<endl;
    }

}