#include<iostream>
using namespace std;

int reverse(int n )

{
    
    int rever = 0;
    while(n>0)
    {
        int remain = n%10;
        rever = rever*10+ remain ;
        
        
        n = n/10;

    } 
    return rever;
}
int main()
{
    int n;
    cout<<"enter the integer : ";
    cin>>n;

   cout<<"reverse : "<< reverse(n);
   
}