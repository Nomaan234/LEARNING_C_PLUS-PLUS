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

void combi(int n, int r)
{
  cout<<fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n,r;
    cout<<"enter the value of n: ";
    cin>>n;

    cout<<"enter the value of r: ";
    cin>>r;
    
    // fact(n);
    // cout<<endl;
    // fact(r);
    // cout<<endl;
    // fact(n-r);

    // cout<<fact(n)/(fact(r)*fact(n-r));

  combi(n,r);



//     int a=1;
//    for(int i=1 ; i<=n ; i++)
//    {
//      a *= i ;
//    }

//    int b=1;
//    for(int i=1 ; i<=r ; i++)
//    {
//      b *= i ;
//    }

//    int c=1;
//    for(int i=1 ; i<=n-r ; i++)
//    {
//      c *= i ;
//    }

    

}