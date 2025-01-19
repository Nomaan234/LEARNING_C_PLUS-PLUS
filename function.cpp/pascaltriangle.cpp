#include <iostream>
using namespace std;

int fact( int n)
{
     int a=1;
   for(int i=1 ; i<=n ; i++)
   {
     a *= i ;
   }

   return a;

}

int combi(int n, int r)
{
  return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n,m;
    cout<<"enter number of row : ";
    cin>>n;
    // cout<<"enter number of column : ";
    // cin>>m;

    

    for(int i=0 ; i<=n ; i++)
    {

         for(int j=0 ; j<=n-i ; j++)
             {
                cout<<"  ";
             }

        for(int j=0 ; j<=i ; j++)
        {
         cout<<combi(i,j)<<"   ";   
        }
        cout<<endl;

    }

}