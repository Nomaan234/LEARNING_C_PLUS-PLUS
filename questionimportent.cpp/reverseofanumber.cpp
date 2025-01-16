#include <iostream>
using namespace std;
int main()
{
    int n,reverse=0;
    cout<<"enter any number :";
    cin>>n;
    int original= n;

    while(n>0)
    {
    int ld=n%10;
    n=n/10;

   reverse = reverse*10 + ld;

    }
    cout<<original<<endl;
    cout<<reverse<<endl;
    cout<<"sum of original and reverse : 999"<<original+reverse;


}