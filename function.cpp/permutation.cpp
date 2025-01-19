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

int permu(int n, int r)
{
  return fact(n)/fact(n-r);
}

int main()
{
    int n,r;
    cout<<"enter the value of n: ";
    cin>>n;

    cout<<"enter the value of r: ";
    cin>>r;


  cout<<permu(n,r);
}