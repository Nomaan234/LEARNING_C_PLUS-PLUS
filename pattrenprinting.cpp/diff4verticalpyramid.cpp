#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter hieght of pyramid (half of it) : ";
    cin>>n;
    // cout<<"enter number of column : ";
    // cin>>m;

    

    for(int i=1 ; i<=n ; i++) 
    {
       
         
        for(int j=1 ; j<=n-i ; j++)   
        {
            cout<<"  " ;
            
        }

         for(int j=1 ; j<=(2*i-1); j++)
        {
            cout<<"* ";
        }
      
        cout<<endl;
    }


    for(int i=n-1 ; i>=1 ; i--) 
    {
        
        for(int j=1 ; j<=n-i ; j++)   
        {
            cout<<"  " ;
            
        }

        for(int j=1 ; j<=(2*i-1); j++)
        {
            cout<<"* ";
        }
      
        cout<<endl;
    }

}

