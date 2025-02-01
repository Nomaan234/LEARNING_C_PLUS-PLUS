#include<iostream>
using namespace std;

int convert(int n )

{
    int pow = 1;
    int decimal = 0;
    while(n>0)
    {
        int remain = n%2;
        decimal += remain*pow;
        pow *= 2;
        
        n = n/10;

    } 
    return decimal;
}
int main()
{
    int n;
    cout<<"enter the binay form: ";
    cin>>n;

   cout<<"decimal form is : "<< convert(n);
   
}