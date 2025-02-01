#include<iostream>
using namespace std;

int pow( int n)
{
    int  power=0;
    if(n==1)
    {
        return 0;
    }
    while(n>=2)
    {
    if(n%2!=0)
    {
        return 0 ;
    }
    
     else
     {
        n=n/2;
        power++;
     }
    }
    return power;
}

bool PowerOf2(int n )
{
    bool power =true;
    while(n>1)
    {
    if(n%2!=0)
    {
         return power = false;
         
    }
     
     else
     {
        n=n/2;
     }
     
    } 
    
}
int main()
{
    int n;
    cout<<"enter the integer : ";
    cin>>n;
    bool power = true;

    if (PowerOf2(n))
    {
        cout <<"yes power of 2";
    }

    else {
        cout<<"not power of 2";
    }
   
   cout<<endl<<"power of 2 is : "<<pow(n);
}