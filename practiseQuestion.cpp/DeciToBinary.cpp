#include<iostream>
using namespace std;

int convert(int n )

{
    int pow = 1;
    int binary = 0;
    while(n>0)
    {
        int remain = n%2;
        binary += remain*pow;
        pow *= 10;
       n = n/2;

    } 
    return binary;
}
int main()
{
    int n;
    cout<<"enter the decimal form: ";
    cin>>n;

   cout<<"binary form is :"<< convert(n);
   
}